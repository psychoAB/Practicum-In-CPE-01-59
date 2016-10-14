#include <avr/io.h>
#include "lib/peri.h"

int main()
{
    init_peripheral();
    uint16_t lightAnalog = 0;
    while(1)
    {
        lightAnalog = read_adc(PC4);
        lightAnalog = lightAnalog >> 7;
        set_led_value(lightAnalog);
    }
}
