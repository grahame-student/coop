#ifndef GPIO_DRIVER_H_
#define GPIO_DRIVER_H_

#include <stdint.h>
#include <stdbool.h>

#include "gpio_type.h"

uint8_t read(Gpio_t const * const port);
void set_direction(Gpio_t const * const port, const uint8_t pins);
void set_state(Gpio_t const * const port, const uint8_t pins);
void change_state(Gpio_t const * const port, const uint8_t pins, const bool state);

/* GPIO_DRIVER_H_ */
#endif
