#include <Arduino.h>
#include <DataCapture.h>

int numeros[3][3];

void setup() {
  Serial.begin(115200);
  Serial.println();

  
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      numeros[i][j] = DataCapture::captureInteger("Ingrese el valor para la posición (" + String(i) + ", " + String(j) + "): ");
    }
  }

  
  Serial.println("Matriz original");
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      Serial.println(numeros[i][j]);
    }
  }

  
  Serial.println("Matriz transpuesta");
  for (int j = 0; j < 3; j++) {
    for (int i = 0; i < 3; i++) {
      Serial.println(numeros[i][j]);
    }
  }
}

void loop() {
  
}
