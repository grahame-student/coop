#include "gpio_driver.h"
#include "gpio_struct.h"

// Reminder
// <type> * <var_name>             -> non-const pointer to non-const <type>
// <type> const * <var_name>       -> non-const pointer to const <type>
// <type> * const <var_name>       -> const pointer to non-const <type>
// <type> const * const <var_name> -> const pointer to const <type>

uint8_t read(Gpio_t const * const port)
{
    volatile uint8_t const * const ptr_in = (uint8_t *)(port->in);
    return *ptr_in;
}

void set_direction(Gpio_t const * const port, const uint8_t pins)
{
    volatile uint8_t * const ptr_dir = (uint8_t *)(port->dir);
    *ptr_dir |= pins;
}

// Set entire port to defined state
void set_state(Gpio_t const * const port, const uint8_t pins)
{
    volatile uint8_t * const ptr_out = (uint8_t *)(port->out);
    *ptr_out = pins;
}

// Modify a subset of pins
void change_state(Gpio_t const * const port, const uint8_t pins, const bool state)
{
    const uint8_t mask = state? pins : ~pins;
    volatile uint8_t * const ptr_out = (uint8_t *)(port->out);
    if (state)
    {
        *ptr_out |= mask;
    }
    else
    {
        *ptr_out &= mask;
    }
}
