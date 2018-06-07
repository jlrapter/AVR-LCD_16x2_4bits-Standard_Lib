/*
 * Template_LCD_AVR.c
 *
 * Created: 31/05/2018 12:52:36
 *  Author: Jorge Hernandez
 *  email:  jlrapter@gmail.com
 */ 

#define F_CPU  8000000UL

#include <avr/io.h>
#include <util/delay.h>
#include "lcd.h"

void Init_HW(void)
{	
	InitLCD(0);
}

int main(void)
{
	Init_HW();
	
    while(1)
    {
		LCDClear();
		LCDWriteString("Hola Mundo!");
		
		_delay_ms(1000); 
    }
}