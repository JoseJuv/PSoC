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

// Course: TX00DB04-3009 Date: 29/4/2025

/* 
 * Uses a LM35 analog sensor to capture the tempature.
 * Sum up ADC sample values, increment sample count and set second passed flag in interrupts
 * If second_passed flag true then calculate temperature and transmit it formatted as JSON.
 */
   
#include <project.h>
#include "stdio.h"

#define FALSE  0
#define TRUE   1

volatile uint32_t sample_sum = 0;
volatile uint16_t sample_count = 0;
volatile uint8_t second_passed = 0;

CY_ISR_PROTO(TIMER1_ISR);
CY_ISR_PROTO(ADC_IRQHandler);

void send_JSON(uint16_t adc_value, float temperature)
{
    char uartBuffer[64];
    snprintf(uartBuffer, sizeof(uartBuffer), "{ \"ADC\": %u , \"LM35\": %.1f } \r\n", adc_value, temperature);
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
            CyExitCriticalSection(interruptState);

            if (count == 0) continue;

            float avg_counts = (int16_t)(sum / count);
            float temperature = (float)avg_counts / 10.0;

            send_JSON((uint16_t)avg_counts, temperature);
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
