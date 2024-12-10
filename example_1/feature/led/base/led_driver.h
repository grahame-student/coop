#ifndef FEATURE_LED_LED_DRIVER_H_
#define FEATURE_LED_LED_DRIVER_H_

#include "led_type.h"

typedef enum
{
    led_state_off,
    led_state_on,
} led_state;

void led_init(Led_t const * const led);
led_state led_on(Led_t const * const led);
led_state led_off(Led_t const * const led);
led_state led_get_state(Led_t const * const led);

/* FEATURE_LED_LED_DRIVER_H_ */
#endif
