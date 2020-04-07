
#include "Pin.h"

class Servo
{

private:
    int servo_pin;
    int estado; 
    int angle;
     

public:

    //Servo(int angle, int angleBegin, int angleMedium, int angleEnd);
    Servo(int servo_pin);  
    void servoOn(int estado);
    void servoOff(int estado);
    //void setServomotorPins(int a);
};
