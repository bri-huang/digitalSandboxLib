#include <digitalSandbox.h>

void setup(){
  setupSandbox();
}

void loop(){
  LEDon(13, 500);
  LEDoff(13, 500);
}
