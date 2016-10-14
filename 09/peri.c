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

uint16_t read_adc(uint8_t channel)
{
    ADMUX = (0 << REFS1) | (1 << REFS0) | (0 << ADLAR) | (channel & 0b1111);
    ADCSRA = (1 << ADEN) | (1 << ADPS2) | (1 << ADPS1) | (1 << ADPS0) | (1 << ADSC);

    while((ADCSRA & (1 << ADSC)))
        ;
    
    return ADCL + ADCH*256;
}
