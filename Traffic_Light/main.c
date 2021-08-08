/*
 * Traffic_Light.c
 *
 * Created: 8/8/2021 5:13:08 PM
 * Author : Andi
 */ 


#define F_CPU 16000000UL

#include <avr/io.h>
#include <util/delay.h>

int main(void) {
	DDRD |= 1 << PIND2;
	DDRD |= 1 << PIND3;
	DDRD |= 1 << PIND4;
	
	while (1)
	{
		PORTD |= 1 << PIND2;
		_delay_ms(5000);
		PORTD &= ~(1 << PIND2);
		PORTD |= 1 << PIND3;
		_delay_ms(2000);
		PORTD &= ~(1 << PIND3);
		PORTD |= 1 << PIND4;
		_delay_ms(5000);
		PORTD &= ~(1 << PIND4);
		PORTD |= 1 << PIND3;
		_delay_ms(2000);
		PORTD &= ~(1 << PIND3);
		
	}
	
	return 0;
}

