#ifndef FEATURE_LED_LED_STRUCT_H_
#define FEATURE_LED_LED_STRUCT_H_

#include <stdint.h>

#include "hardware/gpio/base/gpio_type.h"

// Only Include this file in modules that need to know the implementation details

struct Led_s
{
    Gpio_t const * const port;
    const uint8_t pin;
};

#endif /* FEATURE_LED_LED_STRUCT_H_ */
