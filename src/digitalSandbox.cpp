/****************************************************************
Main CPP for digitalSandbox. 

08 Dec 2016- Brian Huang, SparkFun Electronics
Code developed in Arduino 1.6.12, on an SparkFun DigitalSandbox v1
****************************************************************/

#include "digitalSandbox.h"
#include <avr/interrupt.h>
#include <Arduino.h>

void setupSandbox()
{
  for(int x=4; x<=11; x++)
	  pinMode(x, OUTPUT); 
  pinMode(13, OUTPUT);
  Serial.begin(9600);
}

// sets the state of all 8 LEDs
void leds(byte d4_state, byte d5_state, byte d6_state, byte d7_state, byte d8_state) 
{
  digitalWrite(4, d4_state);
  digitalWrite(5, d5_state);
  digitalWrite(6, d6_state);
  digitalWrite(7, d7_state);
  digitalWrite(8, d8_state);
}

void setRGB(byte red, byte green, byte blue)
{
  analogWrite(9, red);
  analogWrite(10, green);
  analogWrite(11, blue);
}

void setRGB(byte red, byte green, byte blue, unsigned int delayTime)
{
  analogWrite(9, red);
  analogWrite(10, green);
  analogWrite(11, blue);
  delay(delayTime);
}

void ledOn(byte pinNum)
{
	digitalWrite(pinNum, HIGH);
}

void ledOff(byte pinNum)
{
	digitalWrite(pinNum, LOW);
}	

void ledOn(byte pinNum, unsigned int delayTime)
{
	digitalWrite(pinNum, HIGH);
	delay(delayTime);
}

void ledOff(byte pinNum, unsigned int delayTime)
{
	digitalWrite(pinNum, LOW);
	delay(delayTime);
}	

void blink(byte pinNum)
{
	digitalWrite(pinNum, HIGH);
	delay(500);
	digitalWrite(pinNum, LOW);
	delay(500);
}	

void blink(byte pinNum, unsigned int delayTime)
{
	digitalWrite(pinNum, HIGH);
	delay(delayTime);
	digitalWrite(pinNum, LOW);
	delay(delayTime);	
}

unsigned int readSlider()
{
	return analogRead(SLIDER);
}
unsigned int readSound()
{
	return analogRead(SOUND);
}
unsigned int readLight()
{
	return analogRead(LIGHT);
}
float readTemp()
{   
    // returns the voltage in degrees C
	float voltage = analogRead(TEMP) * AREF;
	voltage /= 1023.0;
	return (voltage - 0.5)*100;
}
boolean readButton()
{
	return digitalRead(BUTTON);
}
boolean readSwitch()
{
	return digitalRead(SWITCH);
}
