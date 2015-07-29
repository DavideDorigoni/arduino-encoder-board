#include <Wire.h>
#include "EncoderBoard.h"

EncoderBoard Enc(3);

//////////////////////////////////////////////////////////////////////////////////////////////////////

void setup() {
  Serial.begin(115200);  // start serial for output
}

//////////////////////////////////////////////////////////////////////////////////////////////////////

void loop() {
  Enc.update();
  Serial.print("#!\t");
  Serial.print(millis() / 1000.0, 4);

  Serial.print("\t");
  Serial.print(Enc.get(0), 4); //prints data from the first encoder

  Serial.print("\t");
  Serial.println(Enc.angular_speed(0), 4);


  // Serial.print("#!\t");
  // Serial.print(millis()/1000.0, 4);
  // Serial.print("\t");
  // Serial.print(Enc.angular_speed(0), 4);
  // Serial.print("\t");
  // Serial.println(Enc.get(0) * RAD_TO_DEG);
  delay(10);
}

//////////////////////////////////////////////////////////////////////////////////////////////////////

