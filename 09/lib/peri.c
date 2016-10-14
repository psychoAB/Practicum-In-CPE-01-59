#include <avr/io.h>
#include "lib/peri.h"

void init_peripheral()
{
    DDRC |= (1 << PC0) | (1 << PC1) | (1 << PC2);
    PORTC &= ~((1 << PC0) | (1 << PC1) | (1 << PC2));
    DDRC &= ~((1 << PC3) | (1 << PC4));
    PORTC |= (1 << PC3);
    PORTC &= ~(1 << PC4);
}

void set_led(uint8_t pin,uint8_t state)
{
    if(state)
    {
        PORTC |= 1 << pin;
    }
    else
    {
        PORTC &= ~(1 << pin);
    }
}

void set_led_value(uint8_t value)
{
    PORTC = (PORTC & 0b11111000) + (value & 0b00000111);
}
