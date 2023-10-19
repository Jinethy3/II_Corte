#include <Arduino.h>
#include <DataCapture.h>

struct etapas {
  int horas;
  int minutos;
  int segundos;
} et[100];

void setup() {
  Serial.begin(115200);
  Serial.println();

  int n_etapas, horasT = 0, minutosT = 0, segundosT = 0;

  n_etapas = DataCapture::captureInteger("Ingrese el número de etapas");
  for (int i = 0; i < n_etapas; i++) {
    et[i].horas = DataCapture::captureInteger("Ingrese el número de horas para la etapa " + String(i + 1) + ": ");
    et[i].minutos = DataCapture::captureInteger("Ingrese el número de minutos para la etapa " + String(i + 1) + ": ");
    et[i].segundos = DataCapture::captureInteger("Ingrese el número de segundos para la etapa " + String(i + 1) + ": ");

    horasT += et[i].horas;
    minutosT += et[i].minutos;
    if (minutosT >= 60) {
      minutosT -= 60;
      horasT++;
    }
    segundosT += et[i].segundos;
    if (segundosT >= 60) {
      segundosT -= 60;
      minutosT++;
    }
  }

  Serial.println("Tiempo total empleado:");
  Serial.print(horasT);
  Serial.print(" horas, ");
  Serial.print(minutosT);
  Serial.print(" minutos, ");
  Serial.print(segundosT);
  Serial.println(" segundos");
}

void loop() {
  
}

