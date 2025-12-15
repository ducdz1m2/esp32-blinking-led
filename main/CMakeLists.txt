idf_component_register(SRCS "hello_world_main.c" "led_task.c"
                       PRIV_REQUIRES spi_flash esp_driver_gpio led
                       INCLUDE_DIRS "")
