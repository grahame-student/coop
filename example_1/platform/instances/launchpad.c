#include "platform/base/platform_driver.h"
#include "platform/base/platform_struct.h"

// dependencies
#include "feature/led/instances/led_red.h"
#include "feature/led/instances/led_green.h"

const struct Platform_s s_platform = {
                                      .red_led = &red_led,
                                      .green_led = &green_led,
};

Platform_t const * const platform = &s_platform;
