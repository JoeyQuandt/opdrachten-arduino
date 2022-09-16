#include <Servo.h>
Servo myServo; // Declare a servo object for us to control
int servoPin = 9; // Var for the pin the servo connects to
int pos = 0; // Var to keep track of the servo's position
void setup() {
 myServo.attach(servoPin); // Tell the servo to what pin it's connected to
}
void loop() {
 for(pos = 0; pos < 250; pos += 2){ // Loop, pos is added to (from 0 to 160)
 myServo.write(pos); // Turn the servo to the position in pos
 if (pos >= 120) {
  pos +=10;
 }

 

 delay(15); // Wait 15ms
 }
 for(pos = 160; pos >= 1; pos -= 2){// Loop, pos is deducted from (from 160
if (pos >= 40) {
  pos -=15;
 }

 if (pos >= 90) {
  pos +=45;
 }
 myServo.write(pos); // Turn the servo to the position in pos
 delay(1); // Wait 15ms
 }
}
