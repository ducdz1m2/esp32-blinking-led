#include <stdio.h>
#include "led_task.h"
#include "led_driver.h"
#include "config.h"

void led_task(void *pvParameter)
{
    int led_pin = (int)pvParameter;
    int interval = (led_pin == LED1) ? LED1_BLINK_MS : LED2_BLINK_MS;

    while (1)
    {
        printf("Task đang chạy: %s\n", pcTaskGetName(NULL));
        led_set(led_pin, 1);
        vTaskDelay(pdMS_TO_TICKS(interval));
        led_set(led_pin, 0);
        vTaskDelay(pdMS_TO_TICKS(interval));
    }
}
