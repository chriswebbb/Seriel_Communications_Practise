#include "spi.h"
#include "digitalPot.h"
#include <avr/io.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

int main(void){
	//setXpot(0);
	//setYpot(0);
	int i;
	init_pot();
	for(;;){
		setXpot(0);
		setYpot(0);
		i = 0;
		for(i=0;i<255;i++){
			_delay_ms(100);
			incXpot();
			incYpot();
		}
	}
}