// Access to BITx defines
#include <msp430.h>

// Access to exposed msp430 ports
#include "hardware/gpio/instances/gpio_msp430.h"

#include "feature/led/base/led_driver.h"
#include "feature/led/base/led_struct.h"

const struct Led_s green_led = {
                                         .port = &port_6,
                                         .pin = BIT6,
};
