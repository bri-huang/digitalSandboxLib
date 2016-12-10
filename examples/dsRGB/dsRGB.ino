//dsRGB.ino example
//Cycles through the RGB main colors

#include "digitalSandbox.h"
digitalSandbox ds;
void setup(){
}

void loop(){
  ds.setRGB(255, 0, 0);   //red
  delay(1000);
  ds.setRGB(0, 255, 0);   //green
  delay(1000);
  ds.setRGB(0, 0, 255);   //blue
  delay(1000);
  ds.setRGB(255, 255, 0); //yellow
  delay(1000);
  ds.setRGB(0, 255, 255); //cyan
  delay(1000);
  ds.setRGB(255, 0, 255); //magenta
  delay(1000);
  ds.setRGB(255, 255, 255); //white
  delay(2000);   
}