/* Partner(s) Name & E-mail
 * Lab Section: 021
 * Assignment: Lab1 Exercise 1
 * Exrecise Description:  Door Garage sensor
 * I acknowledge all content contained herein, excluding template or example
 * code, is my own original work.
 */ 

#include <avr/io.h>


int main(void)
{
	DDRA = 0x00; PORTA = 0xFF;
	DDRB = 0xFF; PORTB = 0x00;
	
	unsigned char tmpA = 0x00;
	unsigned char led = 0x00;
    
    while (1) 
    {
		tmpA = PINA & 0x03;
		
		if((tmpA == 0x00) || (tmpA == 0x02) || (tmpA == 0x03))
		{
			led = 0x00;
		}
		else if(tmpA == 0x01)
		{
			led = 0x01;
		}
		else
		{
			led = 0x00;
		}
		PORTB = led;
    }
	return 0;
}

