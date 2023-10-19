#include <Arduino.h>
#include <DataCapture.h>

int sumar(int n);

void setup() {
  Serial.begin(115200);
  Serial.println();
  int nElementos;

  do {
    nElementos = DataCapture::captureInteger("Digite el número de elementos: ");
  } while (nElementos <= 0);

  Serial.println("La suma es:");
  Serial.print(sumar(nElementos));
}

int sumar(int n) {
  int suma = 0;
  for (int i = 1; i <= n; i++) {
    suma += i;
  }
  return suma;
}

void loop() {

}
