#include <DataCapture.h>

int DataCapture::captureInteger(String message) {
    int number = 0;
    Serial.print(message);
    while (!Serial.available()) {}
    String inputString = Serial.readString();
    
    number = inputString.toInt();
    Serial.print(" " + String(number));
    Serial.println();

    return number;
}

String DataCapture::captureString(String message) {
    Serial.print(message);
    while (!Serial.available()) {}
    String inputString = Serial.readString();
    Serial.print(" " + inputString);
    Serial.println();
    return inputString;
}