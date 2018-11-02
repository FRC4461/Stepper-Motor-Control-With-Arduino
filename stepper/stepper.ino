#include "StepperMotor.h"

// This creates an instance of the StepperMotor class and specifies the 4 pins the motor controller is connected to.
// You can create more of these to control more than just one motor.
StepperMotor motor(8,9,10,11);

void setup(){
  Serial.begin(9600);
  motor.setStepDuration(1);
}

void loop(){
  if (Serial.available() > 0) {
    int incomingByte = Serial.read();

    if (incomingByte == 'f') {
      motor.step(1000);
    }

    if (incomingByte == 'b') {
      motor.step(-1000);
    }
  }
}
