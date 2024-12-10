#ifndef HARDWARE_GPIO_GPIO_STRUCT_H_
#define HARDWARE_GPIO_GPIO_STRUCT_H_

#include <stdint.h>

// Only Include this file in modules that need to know the implementation details

struct Gpio_s
{
    const uint16_t in;  // Address of PxIN register
    const uint16_t dir; // Address of PxDIR register
    const uint16_t out; // Address of PxOUT register
};

/* HARDWARE_GPIO_GPIO_STRUCT_H_ */
#endif
