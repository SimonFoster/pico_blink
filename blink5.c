#include "pico/stdlib.h"

int main()
{
    const uint LED_PIN = 25;
    gpio_init(LED_PIN);
    gpio_set_dir(LED_PIN, GPIO_OUT);
    while (true)
    {
        for (int i = 0; i < 5; i++)
        {
            gpio_put(LED_PIN, 1);
            sleep_ms(100);
            gpio_put(LED_PIN, 0);
            sleep_ms(500);
        }
        sleep_ms(2000);
    }
}
