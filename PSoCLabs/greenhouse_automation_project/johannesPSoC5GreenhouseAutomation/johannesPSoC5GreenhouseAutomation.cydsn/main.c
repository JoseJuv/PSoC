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

// Course: TX00DB04-3009 Date: 24/5/2025. Greenhouse Automation

/* 
 * Uses a LM35 analog sensor to capture the temperature.
 * Captures raw soil moisture data using twisted pair wires and CapSense Component.
 * Every 15 minutes boxcars and saves the data using EEPROM-component.
 * Terminal interface commands:
    * ? = prints some identification information: “Greenhouse controller #1
    * T hh:mm = sets the current time for the device
    * T? = prints the current device time
    * D dd/mm/yyyy = sets the current day for the device
    * D? = prints the current device day
    * A = read all saved data
        * Device sends the data on JSON format:
            Date
            Time
            Temperature in Celsius
            Soil moisture as raw data
    * C = clear the device data logging memory 
 */
   
#include <project.h>
#include "stdio.h"
#include "EEPROM.h"

#define FALSE  0
#define TRUE   1

// For logging
typedef struct {
    uint8_t day;
    uint8_t month;
    uint16_t year;
    uint8_t hour;
    uint8_t minute;
    int16_t temperature_x10;
    uint16_t soil_moisture;
} LogEntry;

// EEPROM Settings
#define MAX_ENTRIES 96
#define ENTRY_SIZE sizeof(LogEntry)
#define EEPROM_BASE_ADDR 0x0000
#define EEPROM_TOTAL_SIZE 2048

// Time keeping
volatile uint8_t seconds = 0, minutes = 0, hours = 0;
volatile uint8_t day = 1, month = 1;
volatile uint16_t year = 2025;
volatile uint8_t log_tick_counter = 0;
volatile uint8_t log_to_memory = FALSE;
uint8_t current_log_index = 0;

// Soil moisture
uint16 _data = 0;

// Tempature 
volatile uint32_t sample_sum = 0;
volatile uint16_t sample_count = 0;
volatile uint8_t second_passed = 0;

// 15-min boxcar
uint32_t temp_sum = 0;
uint32_t moist_sum = 0;
uint16_t samples_count = 0;

// Servo movement
volatile uint8_t pwm_flag = 0;
uint16_t servo_positions[6] = {1000, 1200, 1400, 1600, 1800, 2000};
uint16_t actualPW = 1000;
uint16_t targetPW = 1000;
uint8_t turnSpeed = 5;

uint8_t low_temp_warning = FALSE;

CY_ISR_PROTO(TIMER1_ISR);
CY_ISR_PROTO(ADC_IRQHandler);
CY_ISR_PROTO(my_PWM_isr);

void UpdateServoPWM(uint16_t *actualPW, uint16_t targetPW, uint8_t speed);
uint16_t milliseconds(void);
void send_JSON(float temperature, uint16 data);
void handle_temperature(float temperature);
void save_log_entry(LogEntry *entry);
void parse_uart_commands(char *cmd);
void log_temperature();
void handle_time();

int main(void)
{
    CyGlobalIntEnable;
    
    CapSense_Start();
    EEPROM_Start();
    PWM_1_Start();
    PWM_ctrl_StartEx(my_PWM_isr);
    PWM_1_WriteCompare(actualPW);
    ADC_DelSig_1_Start();
    UART_1_Start();
    Timer_1_Start();
    isr_Timer_1_StartEx(TIMER1_ISR);
    ADC_DelSig_1_IRQ_StartEx(ADC_IRQHandler);
    ADC_DelSig_1_StartConvert();
    
    char uart_buffer[64];
    uint8_t uart_index = 0;
    
    for (;;)
    {
        if (UART_1_GetRxBufferSize()) {
            char c = UART_1_GetChar();
            if (c == '\r' || c == '\n') {
                uart_buffer[uart_index] = '\0';
                parse_uart_commands(uart_buffer);
                uart_index = 0;
            } else if (uart_index < sizeof(uart_buffer) - 1) {
                uart_buffer[uart_index++] = c;
            }
        }        
        
        if (pwm_flag)
        {
            pwm_flag = 0;
            UpdateServoPWM(&actualPW, targetPW, turnSpeed);
            PWM_1_WriteCompare(actualPW);
        }

        if (second_passed)
        {
            handle_time();
            if(log_to_memory){
                log_to_memory = FALSE;
                log_temperature();
            }
            CapSense_ScanSensor(0); 
            while(CapSense_IsBusy());
            _data = CapSense_ReadSensorRaw(0);; // - baseline;
            uint8 interruptState = CyEnterCriticalSection();
            uint32_t sum = sample_sum;
            uint32_t count = sample_count;
            sample_count = 0;
            sample_sum = 0;
            second_passed = 0;
            CyExitCriticalSection(interruptState);
           
            if (count == 0)
                continue;

            float avg_counts = (int16_t)(sum / count);
            float temperature = avg_counts / 10.0;
            
            temp_sum += avg_counts;
            moist_sum += _data;
            samples_count++;
            
            send_JSON(temperature, _data);
            handle_temperature(temperature);
        }
    }
}

// Handles timekeeping and setting log to memory flag true every 15 minutes
void handle_time(){
    seconds++;
    if (seconds >= 60) {
        seconds = 0;
        minutes++;
        log_tick_counter++;  
        if (minutes >= 60) {
            minutes = 0;
            hours++;
            if (hours >= 24) {
                hours = 0;
                day++;
            }
        }

        if (log_tick_counter >= 15) {
            log_tick_counter = 0;
            log_to_memory = TRUE;
        }
    }
}

// Handles "extra heating" and "hatch opening" based off temperature
void handle_temperature(float temperature)
{
    if (temperature < 5.0 && !low_temp_warning)
    {
        UART_1_PutString("{ \"info\": \"Extra heating on.\" }\r\n");
        low_temp_warning = TRUE;
    }
    else if (temperature > 10.0 && low_temp_warning)
    {
        UART_1_PutString("{ \"info\": \"Turning off extra heating.\" }\r\n");
        low_temp_warning = FALSE;
    }

    if (!low_temp_warning)
    {
        uint8_t open_level = 0;
        if (temperature > 20.0)
        {
            if (temperature > 25.0)
                temperature = 25.0;

            open_level = (uint8_t)((temperature - 20.0) * 1);
        }
        if (open_level > 5)
            open_level = 5;

        targetPW = servo_positions[open_level];
    }
}

// Prints the air temp and soil moisture data
void send_JSON(float temperature, uint16 data)
{
    char uartBuffer[64];
    snprintf(uartBuffer, sizeof(uartBuffer), "{ \"air_temperature\": %.1f, \"soil_moisture\": %i} \r\n", temperature, data);
    UART_1_PutString(uartBuffer);
}

// Sets servo target position
void UpdateServoPWM(uint16_t *actualPW, uint16_t targetPW, uint8_t speed)
{
    if (*actualPW < targetPW)
    {
        *actualPW += speed;
        if (*actualPW > targetPW)
            *actualPW = targetPW;
    }
    else if (*actualPW > targetPW)
    {
        *actualPW -= speed;
        if (*actualPW < targetPW)
            *actualPW = targetPW;
    }
}

// Saves log to EEPROM
void save_log_entry(LogEntry *entry) {
    if (current_log_index >= MAX_ENTRIES) return;

    uint16_t address = EEPROM_BASE_ADDR + (current_log_index * ENTRY_SIZE);
    uint8_t *data = (uint8_t*)entry;
    
    uint8 interruptState = CyEnterCriticalSection();    
    for (uint8_t i = 0; i < ENTRY_SIZE; i++) {
        EEPROM_WriteByte(data[i], address + i);
    }
    CyExitCriticalSection(interruptState);
    
    current_log_index++;
}

// Loops through and clears any data in EEPROM memory.
void clear_logs() {
    uint8 interruptState = CyEnterCriticalSection();      
    for (uint16_t i = 0; i < MAX_ENTRIES * ENTRY_SIZE; i++) {  
        EEPROM_WriteByte(0xFF, EEPROM_BASE_ADDR + i);
    }
    CyExitCriticalSection(interruptState);    
    current_log_index = 0;
}

// Prints all the logs from EEPROM
void print_all_logs() {
    char buffer[128];
    for (uint8_t i = 0; i < MAX_ENTRIES; i++) {
        uint16_t addr = EEPROM_BASE_ADDR + (i * ENTRY_SIZE);
        
        if ((addr + ENTRY_SIZE) > EEPROM_TOTAL_SIZE) break;
        
        uint8 interruptState = CyEnterCriticalSection();
        uint8_t raw[ENTRY_SIZE];
        for (uint8_t j = 0; j < ENTRY_SIZE; j++) {
            raw[j] = EEPROM_ReadByte(addr + j);
        }
        CyExitCriticalSection(interruptState);

        if (raw[0] == 0xFF) break; // Empty entry

        LogEntry *entry = (LogEntry*)raw;

        snprintf(buffer, sizeof(buffer),
            "{ \"date\": \"%02d/%02d/%04d\", \"time\": \"%02d:%02d\", \"temperature\": %.1f, \"soil_moisture\": %u }\r\n",
            entry->day, entry->month, entry->year,
            entry->hour, entry->minute,
            entry->temperature_x10 / 10.0f,
            entry->soil_moisture
        );
        UART_1_PutString(buffer);

    }
}

// Creates a log entry to be saved to EEPROM
void log_temperature() {
    if (samples_count == 0) return;

    int16_t avg_temp = temp_sum / samples_count;
    uint16_t avg_moist = moist_sum / samples_count;

    LogEntry entry = {
        .day = day,
        .month = month,
        .year = year,
        .hour = hours,
        .minute = minutes,
        .temperature_x10 = avg_temp,
        .soil_moisture = avg_moist
    };

    save_log_entry(&entry);
    
    temp_sum = 0;
    moist_sum = 0;
    samples_count = 0;
}

// Parses the user input. The commands and usage is explained in the overview comment block.
void parse_uart_commands(char *cmd) {
    if (cmd[0] == '?') {
        UART_1_PutString("Greenhouse controller 1\r\n");
    } else if (strncmp(cmd, "T ", 2) == 0) {
        int h, m;
        sscanf(&cmd[2], "%d:%d", &h, &m);
        hours = h;
        minutes = m;
    } else if (strcmp(cmd, "T?") == 0) {
        char buf[32];
        snprintf(buf, sizeof(buf), "Time: %02d:%02d\r\n", hours, minutes);
        UART_1_PutString(buf);
    } else if (cmd[0] == 'D' && cmd[1] == ' ') {
        sscanf(&cmd[2], "%2hhu/%2hhu/%4hu", &day, &month, &year);
    } else if (strcmp(cmd, "D?") == 0) {
        char buf[16];
        snprintf(buf, sizeof(buf), "%02d/%02d/%04d\r\n", day, month, year);
        UART_1_PutString(buf);
    } else if (cmd[0] == 'A') {
        print_all_logs();
    } else if (cmd[0] == 'C') {
        clear_logs();
        UART_1_PutString("Memory cleared.\r\n");
    }
}

// Set servo movement flag to true every 20ms for smooth movement
CY_ISR(my_PWM_isr)
{
    (void)PWM_1_ReadStatusRegister();
    pwm_flag++;
}

// Adds up the adc values and counts
CY_ISR(ADC_IRQHandler)
{
    uint16_t adc_value = ADC_DelSig_1_GetResult16();
    if(!adc_value){
        return;
    }
    sample_sum += adc_value;
    sample_count++;
}

// Sets second passed flag true every second
CY_ISR(TIMER1_ISR) {
    Timer_1_ReadStatusRegister();
    second_passed = TRUE;
}

