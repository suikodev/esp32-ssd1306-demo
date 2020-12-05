#include <stdio.h>
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "ssd1306.h"

#define SDA_PIN CONFIG_SDA_GPIO_PIN
#define SCL_PIN CONFIG_SCL_GPIO_PIN

void app_main(void)
{

    ssd1306_128x64_i2c_initEx(SCL_PIN, SDA_PIN, 0); // 0 means default i2c address of lcd display
    ssd1306_clearScreen();
    ssd1306_setFixedFont(ssd1306xled_font6x8);
    ssd1306_printFixed(0, 8, "hello, world!", STYLE_NORMAL);
}