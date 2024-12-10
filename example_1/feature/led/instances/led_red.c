// Access to BITx defines
#include <msp430.h>

// Access to exposed msp430 ports
#include "hardware/gpio/instances/gpio_msp430.h"

#include "feature/led/base/led_driver.h"
#include "feature/led/base/led_struct.h"

const struct Led_s red_led = {
                                         .port = &port_1,
                                         .pin = BIT0,
};
