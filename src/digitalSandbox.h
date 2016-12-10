/****************************************************************
Core header file for all the various DigitalSandbox functions.

08 Dec 2016- Mike Hord, SparkFun Electronics

Code developed in Arduino 1.6.12, on an SparkFun DigitalSandbox v1.
****************************************************************/

#ifndef digitalSandbox_h
#define digitalSandbox_h
#endif

#include <Arduino.h>

// Pin aliases for analog input pins
#define    TEMP       A0
#define    LIGHT      A1
#define    SOUND      A2
#define    SLIDER     A3

#define    BUTTON     12
#define    SWITCH     2
#define    RED        9
#define    GREEN      10
#define    RED        11
#define    AREF  5.0

// This class handles motor functionality. I expect one instance of this at the
//  start of a piece of RedBot code.
class digitalSandbox
{
  public:
    digitalSandbox();          // Constructor. Mainly sets up pins.
	void leds(byte d4, byte d5, byte d6, byte d7, byte d8); // sets the state of all 8 LEDs
	void LEDon(byte pin);
	void LEDoff(byte pin);
	
	void LEDon(byte pin, unsigned int timeDelay);
	void LEDoff(byte pin, unsigned int timeDelay);	
	void setRGB(byte _red, byte _green, byte _blue);
	void setRGB(byte _red, byte _green, byte _blue, unsigned int _timeDelay);

	void blink(byte pinNum); 
	void blink(byte pinNum, unsigned int delayTime); 
	unsigned int readSlider();
	unsigned int readSound();
	unsigned int readLight();
	float readTemp();
	boolean readButton();
	boolean readSwitch();	
};