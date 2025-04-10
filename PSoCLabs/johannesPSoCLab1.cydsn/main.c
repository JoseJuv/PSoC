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
#include "project.h"
#include "UART.h"
#include <stdio.h> 

int main(void)
{
    CyGlobalIntEnable; /* Enable global interrupts. */
    
    uint8 counter = 0;
    char buffer[8];
    
    UART_Start();
    LED1_Write(0); 
    
    UART_PutString("Johannes Juvonen\r\n");
    
    for(;;)
    {
        if(Button_Read() == 0)
        {
            LED1_Write(1);
            CyDelay(100);
            LED1_Write(0);
            CyDelay(900);
            counter++;
        }
        if (UART_GetRxBufferSize() > 0)
        {
            uint8 received = UART_GetChar();
            if (received >= 32 && received <= 126) // ASCII printable characters
            {
                sprintf(buffer, "%u\r\n", counter);
                UART_PutString(buffer);
            }
        }
        
    }
}

/* [] END OF FILE */
