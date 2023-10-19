#include <Arduino.h>

int i, f;


void setup() 
{
  Serial.begin(115200);
  Serial.println();

  i=1;

do{

    Serial.println(i);
    i++;

}
while (i<=10);
{
  Serial.println(i);
}

f=10;

do{

    Serial.println(f);
    f--;

}
while (f>=1);
{
  Serial.println(f);
}

 

}

void loop() {
  
}

