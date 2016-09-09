#define F_CPU 16000000UL

#include <avr/io.h>
#include <util/delay.h>

int main()
{
    PORTD = 0b00000000;
    DDRD = 0b00001000;

    while(1)
    {
        PORTD = 0b00001000;
        _delay_ms(1000);
        PORTD = 0b00000000;
        _delay_ms(500);
    }
    return 0;
}
