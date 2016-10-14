#include <avr/io.h>
#include <util/delay.h>
#include "lib/peri.h"

int main()
{
    init_peripheral();
    int8_t number = 0;
    while (1)
    {
        if(number >7)
        {
            number = 0;
        }
        set_led_value(number);
        _delay_ms(500);
        number++;
    }
}
