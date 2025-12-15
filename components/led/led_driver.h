#ifndef LED_DRIVER_H
#define LED_DRIVER_H

#include "driver/gpio.h"

void led_init(gpio_num_t pin);
void led_set(gpio_num_t pin, int level);

#endif