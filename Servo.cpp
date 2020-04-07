#include <Arduino.h>
#include "Servo.h"

Servo::Servo(int servo_pin)
{
    
    this->servo_pin = servo_pin;

    // setup the pins on the microcontroller:
    pinMode(this->servo_pin, OUTPUT);
    //digitalWrite(servo_pin, HIGH);
    //return;
}

void Servo::servoOn(int estado)
{
    this->estado = 1;
    digitalWrite(servo_pin, HIGH);
}

void Servo::servoOff(int estado)
{
    this->estado = 0;
    digitalWrite(servo_pin, LOW);
}

