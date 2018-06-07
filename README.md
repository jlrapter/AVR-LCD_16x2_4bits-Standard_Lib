# avr-LCD Library for hd44780

## Description

This is an avr-gcc library for the HD44780 character LCD display.

I couldn't find an avr-gcc library that drives the display correctly. 
Finally, I find the library contribution from Avinash Gupta <avinash@eXtremeElectronics.co.in>, 
and I did some upgrades to such library to handle whichever Pinout of the MCU from AVR.
Therefore, it is a library to easily access standard lcd modules with AVR series of MCUs from Atmel. 
Use with AVR studio and WinAVR.

Tested with the Easy AVR v7 development board from MikroE.

## Usage

See `lcd.h` for the usable configuration of the pinout. You need to change it with the pins you're using.

Also, you can check the functions available for LCD programming.

Additionaly, you can find an basic example main.c program to test the library.
## License

Licensed under the GNU General Public License, Version 2.0.

You may find a copy of the license at

```
http://www.gnu.org/licenses/gpl-2.0.html
```

## Original References of the Library project contributed by Avinash Gupta

- [SC1602BS Character Display Module](http://akizukidenshi.com/catalog/g/gP-00040/)
- [Arduino's LiquidCrystal library source](https://code.google.com/p/arduino/source/browse/trunk/libraries/LiquidCrystal)
