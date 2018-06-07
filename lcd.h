#include <avr/io.h>

#ifndef F_CPU
	#define F_CPU 8000000UL
#endif

#include <util/delay.h>


#ifndef _LCD_H
#define _LCD_H
/*_________________________________________________________________________________________*/

/************************************************
	LCD CONNECTIONS
*************************************************/

#define LCD_DATA D	//Port PD2-PD5 are connected to D4-D7
#define LCD_DATA_D4	PD2
#define LCD_DATA_D5	PD3
#define LCD_DATA_D6	PD4
#define LCD_DATA_D7	PD5

#define LCD_E D 		//Enable OR strobe signal
#define LCD_E_POS	PD6	//Position of enable in above port

#define LCD_RS D	
#define LCD_RS_POS 	PD7

#define LCD_RW B
#define LCD_RW_POS 	PB0


//************************************************

#define LS_BLINK 0B00000001
#define LS_ULINE 0B00000010
#define LCD_BL_ON	1
#define LCD_BL_OFF	0


/***************************************************
			F U N C T I O N S
****************************************************/


//High Level
void InitLCD(uint8_t style);
void LCDWriteString(const char *msg);
void LCDWriteInt(int val,unsigned int field_length);
void LCDGotoXY(uint8_t x,uint8_t y);

//Low level
void LCDByte(uint8_t,uint8_t);
#define LCDCmd(c) (LCDByte(c,0))
#define LCDData(d) (LCDByte(d,1))

void LCDBusyLoop();


/***************************************************
			F U N C T I O N S     E N D
****************************************************/


/***************************************************
	M A C R O S
***************************************************/
#define LCDClear() LCDCmd(0b00000001)
#define LCDHome() LCDCmd(0b00000010);

#define LCDWriteStringXY(x,y,msg) {\
 LCDGotoXY(x,y);\
 LCDWriteString(msg);\
}

#define LCDWriteIntXY(x,y,val,fl) {\
 LCDGotoXY(x,y);\
 LCDWriteInt(val,fl);\
}


 #define _CONCAT(a,b) a##b
 #define PORT(x) _CONCAT(PORT,x)
 #define PIN(x) _CONCAT(PIN,x)
 #define DDR(x) _CONCAT(DDR,x)

/***************************************************/




/*_________________________________________________________________________________________*/
#endif






