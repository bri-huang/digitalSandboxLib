//dsBlink.ino
//  Blinks the default LED on pin 13 on and off at a rate of 1 blink per second.

//includes the library routines for the digitalSandbox
#include <digitalSandbox.h>

void setup()
{
  setupSandbox();  //sets up pins for digitalSandbox
}

void loop()
{
  ledOn(13);
  delay(500);
  ledOff(13);
  delay(500);
}
