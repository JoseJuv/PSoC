/* ========================================
 *
 * Copyright Johannes Juvonen, Metropolia UAS, Finland, 2025
 * All Rights Reserved
 * UNPUBLISHED, LICENSED SOFTWARE.
 *
 * CC-NA-SA 4.0
 *
 * ========================================
*/

// Course: TX00DB04-3009 Date: 20/5/2025

/* 
 * Uses a LM35 analog sensor to capture the tempature.
 * Sum up ADC sample values, increment sample count and set second passed flag in interrupts
 * If second_passed flag true then:
 *      Calculates average LM35 temperature.
 *      Reads DS18B22 temperature throgh OneWire protocol.
 *      Sends both temperatures over UART in JSON format.
 */
   
#include <project.h>
#include "stdio.h"

#define FALSE  0
#define TRUE   1

#define oneWire_WriteLow()     OneWire_Pin_Write(0)
#define oneWire_Release()      OneWire_Pin_Write(1)
#define oneWire_Read()         OneWire_Pin_Read()
#define oneWire_DirOut()       OneWire_Pin_SetDriveMode(OneWire_Pin_DM_STRONG)
#define oneWire_DirIn()        OneWire_Pin_SetDriveMode(OneWire_Pin_DM_DIG_HIZ)

volatile uint32_t sample_sum = 0;
volatile uint16_t sample_count = 0;
volatile uint8_t second_passed = 0;

CY_ISR_PROTO(TIMER1_ISR);
CY_ISR_PROTO(ADC_IRQHandler);

uint8 oneWire_Reset(void) {
    oneWire_DirOut();
    oneWire_WriteLow();
    CyDelayUs(480);  // Reset pulse
    oneWire_Release();
    oneWire_DirIn();
    CyDelayUs(70);    // Wait for presence
    uint8 presence = !oneWire_Read();
    CyDelayUs(410);   // Wait for end of timeslot
    return presence;
}

void oneWire_WriteBit(uint8 bit) {
    oneWire_DirOut();
    oneWire_WriteLow();
    if (bit) {
        CyDelayUs(6);
        oneWire_Release();
        CyDelayUs(64);
    } else {
        CyDelayUs(60);
        oneWire_Release();
        CyDelayUs(10);
    }
}

void oneWire_WriteByte(uint8 byte) {
    for (uint8 i = 0; i < 8; i++) {
        oneWire_WriteBit(byte & 0x01);
        byte >>= 1;
    }
}

uint8 oneWire_ReadBit(void) {
    uint8 bit;
    oneWire_DirOut();
    oneWire_WriteLow();
    CyDelayUs(6);
    oneWire_Release();
    oneWire_DirIn();
    CyDelayUs(9);
    bit = oneWire_Read();
    CyDelayUs(55);
    return bit;
}

uint8 oneWire_ReadByte(void) {
    uint8 byte = 0;
    for (uint8 i = 0; i < 8; i++) {
        byte >>= 1;
        if (oneWire_ReadBit()) {
            byte |= 0x80;
        }
    }
    return byte;
}

float ds_ReadTemperature(void) {
    if (!oneWire_Reset()) return -1000;

    oneWire_WriteByte(0xCC);
    oneWire_WriteByte(0x44);
    CyDelay(750);             // Wait conversion

    oneWire_Reset();
    oneWire_WriteByte(0xCC);
    oneWire_WriteByte(0xBE);

    uint8 temp_LSB = oneWire_ReadByte();
    uint8 temp_MSB = oneWire_ReadByte();

    int16 temp_raw = (temp_MSB << 8) | temp_LSB;
    return (float)temp_raw * 0.0625f;
}

void send_JSON(uint16_t adc_value, float temperature, float ds_temp)
{
    char uartBuffer[64];
    snprintf(uartBuffer, sizeof(uartBuffer), "{ \"ADC\": %u , \"LM35\": %.1f, \"DS1822\": %.1f } \r\n", adc_value, temperature, ds_temp);
    UART_1_PutString(uartBuffer);
}

int main(void)
{
    CyGlobalIntEnable; /* Enable global interrupts */

    ADC_DelSig_1_Start();
    UART_1_Start();
    Timer_1_Start();
    
    isr_Timer_1_StartEx(TIMER1_ISR);
    ADC_DelSig_1_IRQ_StartEx(ADC_IRQHandler);
    
    ADC_DelSig_1_StartConvert();
    OneWire_Pin_Write(1);
    
    for(;;)
    {
        if (second_passed)
        {
            
            uint8 interruptState = CyEnterCriticalSection();
            uint32_t sum = sample_sum;
            uint32_t count = sample_count;
            
            sample_count = 0;
            sample_sum = 0;
            second_passed = 0;
            
            if (count == 0) {
                CyExitCriticalSection(interruptState);
                continue;
            }    

            float avg_counts = (int16_t)(sum / count);
            float temperature = (float)avg_counts / 10.0;
            float ds_temp = ds_ReadTemperature();
            
            send_JSON((uint16_t)avg_counts, temperature, ds_temp);
            CyExitCriticalSection(interruptState);
        }
    }
}

CY_ISR(ADC_IRQHandler)
{
    uint16_t adc_value = ADC_DelSig_1_GetResult16();
    if(!adc_value){
        return;
    }
    sample_sum += adc_value;
    sample_count++;
}

CY_ISR(TIMER1_ISR)
{
    second_passed = 1;
}
