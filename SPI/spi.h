#include <avr/io.h>

void init_spi_master(void);
void spi_tx(uint8_t b);
uint8_t spi_rx(void);

