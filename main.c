#include "STD_TYPES.h"
#include "DIO_interface.h"
#include "ErrType.h"
#include <util/delay.h>




int main(void)
{
	uint8 array[10] = {0b10111111, 0b10000110, 0b01011011, 0b01001111, 0b01100110
					  ,0b01101101, 0b01111101, 0b00000111, 0b01111111, 0b01101111};

	DIO_u8SetPortDirection(DIO_u8PORTC, DIO_u8PORT_HIGH);

	while(1)
	{
		for(uint8 loop_count = 0; loop_count < 10 ; loop_count++)
		{
			DIO_u8SetPortValue(DIO_u8PORTC, array[loop_count]);
			_delay_ms(1000);
		}
	}

	return 0;
}
