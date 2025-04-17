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

// TX00DB04-3009, 17/4/2025

#include "project.h"

// For button debouncing
#define DEBOUNCE_TIME_MS 200
uint16_t ms_counter = 0;
uint16_t milliseconds(void);

// ISRs and flags
CY_ISR_PROTO(my_button_isr);
CY_ISR_PROTO(my_PWM_isr);
volatile uint8_t button_flag = 0;
volatile uint8_t pwm_flag = 0;

// Servo positions and turn speed
uint16_t servo_positions[5] = {1000, 1250, 1500, 1750, 2000};
uint8_t current_position = 2;
uint8_t turnSpeed = 5;
uint16_t targetPW = 1500;
uint16_t actualPW = 1500;
void UpdateServoPWM(uint16_t *actualPW, uint16_t targetPW, uint8_t speed);


int main(void) {
    CyGlobalIntEnable;

    PWM_1_Start();
    Button_isr_StartEx(my_button_isr);
    PWM_ctrl_StartEx(my_PWM_isr);
    PWM_1_WriteCompare(actualPW);

    for(;;) {
        if (button_flag) {
            button_flag = 0;
            if (milliseconds() >= DEBOUNCE_TIME_MS) {
                ms_counter = 0;
                current_position = (current_position + 1) % 5;
                targetPW = servo_positions[current_position];
            }    
        }        
        
        if(pwm_flag){
            pwm_flag = 0;
            ms_counter += 20;
            UpdateServoPWM(&actualPW, targetPW, turnSpeed);
            PWM_1_WriteCompare(actualPW);
        }    
    }
}

void UpdateServoPWM(uint16_t *actualPW, uint16_t targetPW, uint8_t speed) {
    if (*actualPW < targetPW) {
        *actualPW += speed;
        if (*actualPW > targetPW) {
            *actualPW = targetPW;
        }

    } else if (*actualPW > targetPW) {
        *actualPW -= speed;
        if (*actualPW < targetPW) {
            *actualPW = targetPW;
        }
    }
}

uint16_t milliseconds(void) {
    return ms_counter;
}

CY_ISR(my_button_isr) {
    Button_ClearInterrupt();
    button_flag = 1;
}

CY_ISR(my_PWM_isr) {
    (void)PWM_1_ReadStatusRegister();
    pwm_flag++;
}