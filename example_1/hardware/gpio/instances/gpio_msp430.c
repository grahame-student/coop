#include <msp430.h>

#include "hardware/gpio/base/gpio_struct.h"

// Values are the memory location of each register
// Values were identified from the map file
const struct Gpio_s port_1 = {
                        .in  = 0x0200U,
                        .out = 0x0202U,
                        .dir = 0x0204U,
};

const struct Gpio_s port_6 = {
                        .in  = 0x0241U,
                        .out = 0x0243U,
                        .dir = 0x0245U,
};
