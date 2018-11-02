# Stepper Motor Control With Arduino

For this project you'll be programming the Arduino to control stepper motors and potentially to control a 3D printed robot. Stepper motors are special in that the forsake speed for extreme accuracy. When you control a stepper motor you tell it how many "steps" it should take. For your motors you'll need to look up the datasheets online to determine how many steps they have per complete revolution.

# Wiring

Wiring the Arduino and stepper motors should be relatively simple. See the below wiring guide, but the important part is simply to power the Arduino, connect the GND and +5v lines to the controller and then to connect the 4 IN pins from the motor controller to the Arduino's ports.

![Wiring Diagram](/WiringDiagram.png "Wiring Diagram")

# Coding the Arduino

Start by loading the example program included in this repository on to the Arduino. The example program reads from the serial port and either moves forward when it receives and "f" or backwards when it receives a "b". Note that the stepper motor is not particularly fast so you'll want to be efficient with your movement and finding a short path.

## Modifying the Program

Now that you've got the basics complete, try making a change to the program to control two motors (hint: see the comment near the top of the main code). Can you make these motors rotate in such a way that they'll cause the robot to turn? Note that when you tell the motor class to go X steps, it doesn't return until those steps are complete. The Arduino isn't great at doing two things at once so you'll only be able to drive one motor at a time. This means you'll have to figure out a way to alternate steps between motors.