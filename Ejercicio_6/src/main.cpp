#include <Arduino.h>
#include <DataCapture.h>



int numeros[100], n;



void setup() {
  Serial.begin(115200);
  Serial.println();

  n = DataCapture::captureInteger("Ingrese el valor del vector: ");

  for(int i=0;i<n;i++){
    numeros[i]=DataCapture::captureInteger("Ingrese el valor del numero: ");
   }

   for(int i=0;i<n;i++){
    Serial.print("el vector es:");
    Serial.println(numeros[i]);
   }
}

void loop() {
  
}

