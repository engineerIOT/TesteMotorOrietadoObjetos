#include <Arduino.h>
#include "Stepper.h"
#include "Pin.h"
#include "Servo.h"

Servo servo(6);
Servo servo2(7);

const int stepsPerRevolution = 200; // change this to fit the number of steps per revolution
// for your  6

// initialize the stepper library on pins 2 through 5:
Stepper myStepper(stepsPerRevolution, 2, 4);
Stepper myStepper2(stepsPerRevolution, 3, 5);

void setup()
{
  // set the speed at 60 rpm:
  myStepper.setSpeed(60);
  myStepper2.setSpeed(60);
  // initialize the serial port:
  Serial.begin(9600);

 // servo.setServomotorPins(6);

}

void loop()
{
  // step one revolution  in one direction:
  Serial.println("clockwise");
  myStepper.step(stepsPerRevolution);
  myStepper2.step(stepsPerRevolution);
  delay(500);

  // step one revolution in the other direction:
  Serial.println("counterclockwise");
  myStepper.step(-stepsPerRevolution);
  myStepper2.step(-stepsPerRevolution);
  delay(500);

  servo.servoOn(1);
  delayMicroseconds(1800);
  servo.servoOff(0);
  delayMicroseconds(1800);
 
}