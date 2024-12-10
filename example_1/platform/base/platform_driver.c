#include "platform_driver.h"
#include "platform_struct.h"

#include "feature/led/base/led_driver.h"

void platform_init(Platform_t const * const platform)
{
    led_init(platform->red_led);
    led_init(platform->green_led);
}

void platform_run(Platform_t const * const platform)
{
    for(;;)
    {
        led_on(platform->red_led);
        led_off(platform->green_led);
        __delay_cycles(100000UL);

        led_off(platform->red_led);
        led_on(platform->green_led);
        __delay_cycles(100000UL);
    }
}
