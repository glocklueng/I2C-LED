/*************************************************** 
  This is a test sketch for Adafruit I2C LED Backpacks

  Designed specifically to work with the Adafruit LED 7-Segment backpacks 
  ----> http://www.adafruit.com/products/881
  ----> http://www.adafruit.com/products/880
  ----> http://www.adafruit.com/products/879
  ----> http://www.adafruit.com/products/878

  These displays use I2C to communicate, 2 pins are required to 
  interface. There are multiple selectable I2C addresses. For backpacks
  with 2 Address Select pins: 0x70, 0x71, 0x72 or 0x73. For backpacks
  with 3 Address Select pins: 0x70 thru 0x77

  Adafruit invests time and resources providing this open source code, 
  please support Adafruit and open-source hardware by purchasing 
  products from Adafruit!

  Written by Tom Price after Limor Fried.
  BSD license, all text above must be included in any redistribution
 ****************************************************/
 
#include <Wire.h>
#include "Adafruit_LEDBackpack.h"
#include "Adafruit_GFX.h"

Adafruit_7segment matrix1 = Adafruit_7segment();
Adafruit_7segment matrix2 = Adafruit_7segment();
Adafruit_7segment matrix3 = Adafruit_7segment();
Adafruit_7segment matrix4 = Adafruit_7segment();

void setup() {
  Serial.begin(9600);
  Serial.println("7 Segment Backpack Test");

  matrix1.begin(0x70);
  matrix2.begin(0x71);
  matrix3.begin(0x72);
  matrix4.begin(0x73);
}

void loop() {
  matrix1.writeDigitNum( 0, 0xa, false );
  matrix1.writeDigitNum( 1, 0xd, true );
  matrix1.writeDigitNum( 3, 0x7, false );
  matrix1.writeDigitNum( 4, 0x0, false );
  matrix1.writeDisplay();
  matrix2.writeDigitNum( 0, 0xa, false );
  matrix2.writeDigitNum( 1, 0xd, true );
  matrix2.writeDigitNum( 3, 0x7, false );
  matrix2.writeDigitNum( 4, 0x1, false );
  matrix2.writeDisplay();
  matrix3.writeDigitNum( 0, 0xa, false );
  matrix3.writeDigitNum( 1, 0xd, true );
  matrix3.writeDigitNum( 3, 0x7, false );
  matrix3.writeDigitNum( 4, 0x2, false );
  matrix3.writeDisplay();
  matrix4.writeDigitNum( 0, 0xa, false );
  matrix4.writeDigitNum( 1, 0xd, true );
  matrix4.writeDigitNum( 3, 0x7, false );
  matrix4.writeDigitNum( 4, 0x3, false );
  matrix4.writeDisplay();
  delay(500);
}
