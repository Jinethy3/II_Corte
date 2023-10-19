#include <Arduino.h>
#include <DataCapture.h>

int x, y, oux;

void setup() {
  Serial.begin(115200);
  Serial.println();

  x = DataCapture::captureInteger("Ingrese el valor X: ");
  y = DataCapture::captureInteger("Ingrese el valor Y: ");

  oux = x;
  x = y;
  y = oux;

  Serial.print("El nuevo valor de X es = ");
  Serial.println(x);
  Serial.print("El nuevo valor de Y es = ");
  Serial.println(y);
}

void loop() {
 
}


