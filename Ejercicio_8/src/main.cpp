#include <Arduino.h>

int numeros[] = {4, 1, 2, 3, 5};
int i, j, aux;

void setup() {
  Serial.begin(115200);
  Serial.println();

  
  for (i = 0; i < 4; i++) {
    for (j = 0; j < 4 - i; j++) {
      if (numeros[j] > numeros[j + 1]) {
        aux = numeros[j];
        numeros[j] = numeros[j + 1];
        numeros[j + 1] = aux;
      }
    }
  }

  Serial.println("Orden Ascendente");
  for (i = 0; i < 5; i++) {
    Serial.print(numeros[i]);
    Serial.print(" ");
  }
  Serial.println();

 
  for (i = 0; i < 4; i++) {
    for (j = 0; j < 4 - i; j++) {
      if (numeros[j] < numeros[j + 1]) {
        aux = numeros[j];
        numeros[j] = numeros[j + 1];
        numeros[j + 1] = aux;
      }
    }
  }

  Serial.println("Orden Descendente");
  for (i = 0; i < 5; i++) {
    Serial.print(numeros[i]);
    Serial.print(" ");
  }
  Serial.println();
}

void loop() {
 
}


