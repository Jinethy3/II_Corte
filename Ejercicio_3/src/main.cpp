#include <Arduino.h>
#include <DataCapture.h>

int numero;

void setup() {
  Serial.begin(115200);
  Serial.println();

  numero = DataCapture::captureInteger("Digite un número entero: ");

  if(numero==0){
    Serial.println("El número es par");
    }

    else
    {
      if (numero % 2 == 0) {
      Serial.println("El número es par");
    } else {
      Serial.println("El número es impar");
    }
    
    }
}

void loop() {

}


