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

// Course: TX00DB04-3009 Date: 12/5/2025

/* 
 * Uses a LM35 analog sensor to capture the tempature and uses that as the input for
 * MCP3201 external ADC. Also reads temperature from a digital sensor TC74A2.
 * If second_passed flag true then calculate temperature and transmit it formatted as JSON.
 */
   
#include <project.h>
#include "stdio.h"

#define TC74_ADDRESS      (0x4Au)
#define TEMP_REG_ADDRESS  (0x00u)
#define MCP3201_START_BIT  (0x01)

volatile uint32_t sample_sum = 0;
volatile uint16_t sample_count = 0;
volatile uint8_t second_passed = 0;

CY_ISR_PROTO(TIMER1_ISR);
CY_ISR_PROTO(ADC_IRQHandler);

void send_JSON(uint16_t adc_value, float lm35_temp, int8 tc74_temp, float spi_temp)
{
    char uartBuffer[128];
    snprintf(uartBuffer, sizeof(uartBuffer),
             "{ \"ADC\": %u, \"LM35\": %.1f, \"TC74\": %d, \"SPI\": %.1f }\r\n",
             adc_value, lm35_temp, tc74_temp, spi_temp);
    UART_1_PutString(uartBuffer);
}

// Reads the 12-bit ADC value from MCP3201 
float read_MCP3201_value(void) {
    uint8 msb, lsb;
    uint16 result;
    ss_Write(0);
    SPIM_1_WriteTxData(MCP3201_START_BIT);
    CyDelay(1);
    msb = SPIM_1_ReadRxData();
    lsb = SPIM_1_ReadRxData();
    ss_Write(1);
    result = ((uint16)msb << 4) | (lsb >> 4);
    float temperature = (result / 4095.0) * 2.048 * 100.0;
    return temperature;
}

// Reads the tempature from TC74 digital tempature sensor
int8 read_TC74_temp(void)
{
    uint8 temperature = 0;
    I2C_1_MasterSendStart(TC74_ADDRESS, I2C_1_WRITE_XFER_MODE);
    I2C_1_MasterWriteByte(TEMP_REG_ADDRESS);
    I2C_1_MasterSendRestart(TC74_ADDRESS, I2C_1_READ_XFER_MODE);
    temperature = I2C_1_MasterReadByte(I2C_1_NAK_DATA);
    I2C_1_MasterSendStop();
    
    // Offset the sensor by 4 celsius
    return (int8)temperature - 4;
}

int main(void)
{
    CyGlobalIntEnable;

    // Initialize peripherals
    UART_1_Start();
    I2C_1_Start();
    ADC_DelSig_1_Start();
    SPIM_1_Start();
    Timer_1_Start();

    ss_Write(1);
    // Attach ISRs
    isr_Timer_1_StartEx(TIMER1_ISR);
    ADC_DelSig_1_IRQ_StartEx(ADC_IRQHandler);

    ADC_DelSig_1_StartConvert();

    UART_1_PutString("System Initialized.\r\n");

    for (;;)
    {
        if (second_passed)
        {
            uint8 interruptState = CyEnterCriticalSection();

            uint32_t sum = sample_sum;
            uint16_t count = sample_count;

            sample_sum = 0;
            sample_count = 0;
            second_passed = 0;

            CyExitCriticalSection(interruptState);

            if (count == 0)
                continue;

            float avg_counts = (int16_t)(sum / count);
            
            float lm35_temperature = avg_counts / 10.0;
            int8 tc74_temperature = read_TC74_temp();
            float spi_temp = read_MCP3201_value();

            send_JSON((uint16_t)avg_counts, lm35_temperature, tc74_temperature, spi_temp);
        }
    }
}

CY_ISR(ADC_IRQHandler)
{
    uint16_t adc_value = ADC_DelSig_1_GetResult16();
    if (adc_value == 0)
        return;

    sample_sum += adc_value;
    sample_count++;
}

CY_ISR(TIMER1_ISR)
{
    second_passed = 1;
}