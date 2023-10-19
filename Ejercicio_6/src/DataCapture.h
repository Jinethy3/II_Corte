#include <Arduino.h>

class DataCapture
{
private:
    static bool isInteger(String data);
public:
    static int captureInteger(String message);
    static String captureString(String message);
};