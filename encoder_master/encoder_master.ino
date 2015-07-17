#include <Wire.h>
#include "EncoderBoard.h"

EncoderBoard Enc(3);

//////////////////////////////////////////////////////////////////////////////////////////////////////

void setup() {
  Serial.begin(9600);  // start serial for output
}

//////////////////////////////////////////////////////////////////////////////////////////////////////

void loop() {
  Enc.update();
  Serial.println(Enc.get(0) * RAD_TO_DEG); //prints data from the first encoder
  delay(200);
}

//////////////////////////////////////////////////////////////////////////////////////////////////////
