//dsRGB.ino example
//  Cycles through the RGB main colors
//

//includes the library routines for the digitalSandbox
#include <digitalSandbox.h>

void setup()
{
  setupSandbox();  //sets up pins for digitalSandbox
}

void loop(){
  setRGB(255, 0, 0);    //red
  delay(1000);
  setRGB(0, 255, 0);    //green
  delay(1000);
  setRGB(0, 0, 255);    //blue
  delay(1000);
  setRGB(255, 255, 0);  //yellow
  delay(1000);
  setRGB(0, 255, 255);  //cyan
  delay(1000);
  setRGB(255, 0, 255);  //magenta
  delay(1000);
  setRGB(255, 255, 255); //white
  delay(2000);   
}