#include "led_driver.h"
#include "led_struct.h"
#include "hardware/gpio/base/gpio_driver.h"

void led_init(Led_t const * const led)
{
    set_direction(led->port, led->pin);
}

led_state led_on(Led_t const * const led)
{
    change_state(led->port, led->pin, true);
    return led_get_state(led);
}

led_state led_off(Led_t const * const led)
{
    change_state(led->port, led->pin, false);
    return led_get_state(led);
}

led_state led_get_state(Led_t const * const led)
{
    const uint8_t port_value = read(led->port);
    const bool pin_state = ((port_value & led->pin) != 0U);
    return pin_state ? led_state_on : led_state_off;
}
