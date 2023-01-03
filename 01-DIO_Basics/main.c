/*
 * main.c
 *
 *  Created on: 2 Jan 2023
 *      Author: asmaa
 */
#include <avr/io.h>
#include <util/delay.h>

int main (void)
{
	DDRB = 0b00001111; //PA0 -> Output == DDRA = 0X0f;
	/*PORTA = 0b00000001; // PA0 -> HIGH(5V)
	_delay_ms(1000);
	PORTA = 0; //PA0->LOW
	_delay_ms(1000);*/

	while(1) //Super loop
	{
		/*PORTA = 0b00000001; // PA0 -> HIGH(5V)
		_delay_ms(1000);
		PORTA = 0; //PA0->LOW
		_delay_ms(1000);*/
		PORTB =0b00000001;
		for (int i = 0 ; i < 4 ; i++)
		{
			_delay_ms(250);
			PORTB <<= 1;


			if ( PORTB == 0b00010000 ) //PORTA = 0b00001000
			{
				for(int x = 0; x<4; x++)
				{
					PORTB >>= 1;
					_delay_ms(250);

				}
			}

		}

      }
}

