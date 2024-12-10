// Included to allow for board bring up
#include <msp430.h>

#include "platform/instances/launchpad.h"

int main(void)
{
    // stop watchdog timer
    WDTCTL = WDTPW | WDTHOLD;

    // basic port init - Configure all pins as outputs and set low
    PADIR = 0U; // ports 1 and 2
    PAOUT = 0U;
    PBDIR = 0U; // ports 3 and 4
    PBOUT = 0U;
    PCDIR = 0U; // ports 5 and 6
    PCOUT = 0U;

    PM5CTL0 &= ~LOCKLPM5;

    // we can reference platform, which is a pointer to a concrete struct
    // however we cannot dereference it as we are not provided with the
    // implementation detail as defined in `platform_struct.h`
    platform_init(platform);
    platform_run(platform);
}
