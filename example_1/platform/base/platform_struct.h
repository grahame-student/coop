#ifndef PLATFORM_BASE_PLATFORM_STRUCT_H_
#define PLATFORM_BASE_PLATFORM_STRUCT_H_

#include <stdint.h>

#include "feature/led/base/led_type.h"

// Only Include this file in modules that need to know the implementation details

struct Platform_s
{
    Led_t const * const red_led;
    Led_t const * const green_led;
};

#endif /* PLATFORM_BASE_PLATFORM_STRUCT_H_ */
