#include <Arduino.h>
#include <DataCapture.h>

int vec[100], tam; 

void setup() {

 

}



void loop() {

  tam= DataCapture::captureInteger("Ingrese el valor del vector");
  for(int i=0; i<<tam; i++){
    i+1=DataCapture::captureInteger("Digite un numero");
  }
  
}

