#define IS_SW_PRESSED() (!(PINC & (1 << PC3)))

void init_peripheral();
void set_led(uint8_t,uint8_t);
void set_led_value(uint8_t);
