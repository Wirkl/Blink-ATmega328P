/***********************************************************
*  Programa para encender y apagar un led
*  Micro: Atmega328
*  fecha: 17-02-2022
************************************************************/

//*************** Macros **********************************
#define F_CPU 16000000UL // 16 MHz clock speed

//*************** Librerias *******************************
#include <avr/io.h> //libreria avr
#include <util/delay.h>  //Libreria de retardos

//*************** Funciones y subrutinas ******************



//********** Definicion de variables globales  ***********

const int tiempo=100;


//*************** Programa Principal **********************
int main(void)
{

	//**********Configuraci�n de Puertos **********************
	//Puerto B
	//con el pin PB5 puesto como salida
	//0x20 = 0b00100000

	DDRB |= 0b10111111;
	DDRD |= 0b11100000;

	while(1){ //Bucle infinito
		
		PORTB= 0B00000000;		// set PBX 0
		
		PORTD= 0B00100000;  	// set PD5 1

		_delay_ms(tiempo);    	// delay

		PORTD= 0B01000000;  	// set PD6 1

		_delay_ms(tiempo);    	// delay
			
		PORTD= 0B10000000;  	// set PD7 1

		_delay_ms(tiempo);    	// delay
		
		PORTD= 0B00000000;  	// set PDX 0
		
		PORTB= 0B00000001;		// set PB0 1
		
		_delay_ms(tiempo);    	// delay
		
		PORTB= 0B00000010;		// set PB1 1
		
		_delay_ms(tiempo);    	// delay
		
		PORTB= 0B00000100;		// set PB2 1
		
		_delay_ms(tiempo);    	// delay
		
		PORTB= 0B00001000;		// set PB3 1
		
		_delay_ms(tiempo);    	// delay
		
		PORTB= 0B00010000;		// set PB4 1
		
		_delay_ms(tiempo);    	// delay
	}
}//** Fin de programa
