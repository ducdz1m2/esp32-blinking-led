#include "led_driver.h"
#include "driver/gpio.h"

void led_init(gpio_num_t pin)
{
    gpio_config_t config1 = {0};
    config1.mode = GPIO_MODE_OUTPUT;
    config1.pin_bit_mask = 1ULL << pin;

    gpio_config(&config1);
}
void led_set(gpio_num_t pin, int level)
{
    gpio_set_level(pin, level);
}
