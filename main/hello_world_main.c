/*
 * SPDX-FileCopyrightText: 2010-2022 Espressif Systems (Shanghai) CO LTD
 *
 * SPDX-License-Identifier: CC0-1.0
 */

#include <stdio.h>
#include <inttypes.h>
#include "sdkconfig.h"
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "esp_chip_info.h"
#include "esp_flash.h"
#include "esp_system.h"
#include "driver/gpio.h"
#include "led_driver.h"
#include "config.h"
#include "led_task.h"

void app_main(void)
{
    led_init(LED1);
    led_init(LED2);

    xTaskCreate(led_task, "LED 1", 2048, (void *)LED1, 1, NULL);
    xTaskCreate(led_task, "LED 2", 2048, (void *)LED2, 2, NULL);
}
