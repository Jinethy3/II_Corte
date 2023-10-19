#include <Arduino.h>

int entero = 15;
float flotante = 10.45;
double mayor = 16.3456;
char letra = 'A';

void setup() {
  Serial.begin(115200);

  Serial.println(entero);
  Serial.println(flotante);
  Serial.println(mayor);
  Serial.println(letra);
}

void loop() {

}


