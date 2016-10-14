#include <avr/io.h>
#include <util/delay.h>
#include "lib/peri.h"

int main()
{
    init_peripheral();
    int8_t number = 0;
    while (1)
    {
        while(IS_SWITCH_PRESSED())
        {
            number++;
            if(number >7)
            {
                number = 0;
            }
            set_led_value(number);
            _delay_ms(300);
            while(IS_SWITCH_PRESSED()){}
        }
    }
}
