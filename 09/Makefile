MCU=atmega168
F_CPU=16000000
CFLAGS=-mmcu=$(MCU) -DF_CPU=$(F_CPU)
OBJS=peri.o

.SECONDARY:

%.flash: %.hex
	avrdude -p $(MCU) -c usbasp -u -U flash:w:$<

clean:
	-rm *.hex *.elf *.o

%.hex: %.elf
	avr-objcopy -j .text -j .data -O ihex $< $@

%.elf: %.o $(OBJS)
	avr-gcc $(CFLAGS) -o $@ $^

%.o: %.c
	avr-gcc $(CFLAGS) -c -o $@ $<
