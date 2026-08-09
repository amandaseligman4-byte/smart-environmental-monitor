#include <Wire.h>

void setup() {
  Wire.begin(21, 22);

  Serial.begin(115200);
  Serial.println("\nI2C Scanner");

  byte error, address;

  for(address = 1; address < 127; address++) {

    Wire.beginTransmission(address);
    error = Wire.endTransmission();

    if(error == 0) {
      Serial.print("Found device at 0x");

      if(address < 16)
        Serial.print("0");

      Serial.println(address, HEX);
    }
  }

  Serial.println("Done scanning.");

Wire.beginTransmission(0x76);
Serial.print("0x76: ");
Serial.println(Wire.endTransmission());

Wire.beginTransmission(0x77);
Serial.print("0x77: ");
Serial.println(Wire.endTransmission());
}

void loop() {

}