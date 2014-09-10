// Pgm to understand the basic working of connecting a servo to a arduino
// by leopauly <meetleopauly@yahoo.com> 
// This example code is in the public domain.


#include <Servo.h> 
 
Servo myservo;  // create servo object to control a servo 
                // a maximum of eight servo objects can be created    // variable to store the servo position 
 
void setup() 
{ 
  myservo.attach(9);  // attaches the servo on pin 9 to the servo object 
  myservo.write(0);   // brings the servo knob to its initial position
  delay(1000);       
  myservo.write(45);    // turns the knob to an angle 45 w.r.t to orgin (0 degree) and not w.r.t current position
  delay(1000);  
  myservo.write(95);     // turns the knob to an angle 95 w.r.t to orgin (0 degree) and not w.r.t current position
  delay(1000);   
  myservo.write(145);    // turns the knob to an angle 145 w.r.t to orgin (0 degree) and not w.r.t current position
  delay(1000);
}
 
 
void loop() 
{ 
} 
