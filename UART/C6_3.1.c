#include <avr/io.h>
#include <util/delay.h>

void poll_encoder_v1(){
	// polls for turns only
	if (~PINB&(1<<PB2)) {
		if (~PINB&(1<<PB1)){
			// left turn
			
		} else {
			// right turn
			
		}			
		_delay_ms(2); // force a little down time before continuing 
		while (~PINB&(1<<PB2)){} // wait until R1 comes back high
	}
}

int main(void){
	
	DDRA = 0xFF;
	DDRC = 0x00;

	const uint8_t segments[10]={0xFC, 0x60, 0xDA, 0xF2, 0x66, 0xB6, 0xBE, 0xE4, 0xFE, 0xF6};
	uint8_t i=0;
	while(1){
		
		if (~PINC&(1<<PC0)) {
			if (~PINC&(1<<PC1)){
				// left turn
				i++;
				if (i>9){i=9;}
			} else {
				// right turn
				i--;
				if(i<0){i=0;}
		}	
			PORTA = segments[i];
		_delay_ms(2); // force a little down time before continuing 
		while (~PINC&(1<<PC0)){} // wait until R1 comes back high
	}
}
}
			/* PORTA = segments[i];
			while((PINC & _BV(7)) != 0)
			PORTA = segments[i];	
			_delay_ms(100);
			PORTC |=_BV(7);
			
				if(i > 9){
					i = 0;
				}
			
			while((PINC & _BV(7)) == 0);
			
			
			i=i+1;
			}
			_delay_ms(1000); */