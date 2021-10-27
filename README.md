# Seriel_Communications_Practise
![GitHub Logo](/MIPS_processor_Yeet.png)

<!-- ABOUT THE PROJECT -->
## About The Project

Using seriel communication to communicate between a microcontroller and a PC. It uses a rotary encoder, to change a value, this value is then relayed to the PC.

<p align="right">(<a href="#top">back to top</a>)</p>

<!-- GETTING STARTED -->
## To Compile and run

In UART the files Inputwait.c, LEDprint0.c and LEDtimer.c are all seperate.
Inputwait will send the data off to the PC but if the encoder becomes 0 it will wait for an input from the PC.
LEDprint0 will only send the data.
LEDtimer will count up, sending data over to the PC.

SPI would communicate with a digital potentiometer (mcp4261).

<!-- LICENSE -->
## License

Distributed under the MIT License.

<p align="right">(<a href="#top">back to top</a>)</p>
