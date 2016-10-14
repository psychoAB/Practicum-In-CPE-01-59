#include <avr/io.h>
#include "lib/peri.h"

int main()
{
    init_peripheral();
    uint16_t lightAnalog = 0;
    while(1)
    {
        lightAnalog = read_adc(PC4);
        if(lightAnalog > 682)
        {
            set_led_value(4);
        }
        else if(lightAnalog > 341)
        {
            set_led_value(2);
        }
        else
        {
            set_led_value(1);
        }
    }
}
