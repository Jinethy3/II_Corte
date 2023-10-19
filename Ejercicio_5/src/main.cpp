#include <Arduino.h>
#include <DataCapture.h>

int numero, factorial = 1;

void setup() {
  Serial.begin(115200);
  Serial.println();

  numero = DataCapture::captureInteger("Ingrese el valor del número: ");

  for (int i = 1; i <= numero; i++) {
    factorial = factorial * i;
  }

  Serial.print("El factorial de ");
  Serial.print(numero);
  Serial.print(" es: ");
  Serial.println(factorial);
}

void loop() {
 
}
