#include <stdio.h>
#include <stdlib.h>

#include "digitalPot.h"
#include "spi.h"

#define wiper0d 0x08
#define wiper0i 0x04
#define wiper1d 0x18
#define wiper1i 0x14
#define setx 0x00
#define sety 0x10

void init_pot(void)
{
    init_spi_master();
}

void decXpot(void)
{
    spi_tx(wiper0d);	//wiper 0
}

void incXpot(void)
{
    spi_tx(wiper0i);
}

void decYpot(void)
{
    spi_tx(wiper1d);	//wiper 1
}

void incYpot(void)
{
    spi_tx(wiper1i);
}

void setXpot(uint8_t x)
{
	spi_tx(setx);
    spi_tx(x);
}

void setYpot(uint8_t y)
{
	spi_tx(sety);
    spi_tx(y);
}

