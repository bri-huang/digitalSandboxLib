# digitalSandboxLib
Arduino Library for the Digital Sandbox

To make it easier to use the Digital Sandbox, all pinModes are set with the 
instantiation of the digitalSandbox class. In addition, methods are added
to simplify the manipulation of the LEDs and pins on the board. 

These methods can be found in the .h file, but are here for reference:

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
unsigned int readTemp();
boolean readButton();
boolean readSwitch();