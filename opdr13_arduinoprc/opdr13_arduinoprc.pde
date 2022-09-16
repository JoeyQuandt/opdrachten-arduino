import processing.serial.*;
Serial myPort; // Create object from Serial class
int val; // Data received from the serial port
void setup()
{
size(200, 200);
 String portName = Serial.list()[0]; //adjust 0 to the port your Arduino
 // is connected to
 myPort = new Serial(this, portName, 9600);
}
void draw() {
 background(0, 0, 255);
 if (mousePressRect() == true) { // If mouse is over square,
 fill(255, 255, 0); // change color light grey and
 myPort.write('H'); // send an H to indicate mouse is over square
 }
 else { // If mouse is not over square,
 fill(255, 0, 0); // change color black and
 myPort.write('L'); // send an L otherwise
 }
 circle(100, 100, 100); // Draw a square
}
boolean mousePressRect() { // Test if mouse is over square
 return ((mouseX >= 50) && (mouseX <= 150) && (mouseY >= 50) && (mouseY <=
150) && mousePressed);
}
