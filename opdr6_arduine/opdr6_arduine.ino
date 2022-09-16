float sensorValue = 0;
float sensorValueYellow = 0;
float sensorValueGreen = 0; // variable for sensor value
int sensorPin = A0; // variable for sensor pin
int greenLedPin = 10;
int yellowLedPin = 9;

void setup() {
pinMode(sensorPin, INPUT);
pinMode(greenLedPin, OUTPUT);
pinMode(yellowLedPin, OUTPUT);
Serial.begin(9600);
}

void loop() {
sensorValue = analogRead(sensorPin); // read the value/voltage on the sensor
sensorValueGreen = map(sensorValue, 0, 1023, 0, 255);
sensorValueYellow = (255 - sensorValueGreen);

//sensorValue = (sensorValue/1023)*255;
analogWrite(greenLedPin, sensorValueGreen);
analogWrite(yellowLedPin, sensorValueYellow);

// pin and store that value in the
// variable sensorValue

Serial.println(sensorValue); // print out sensorValue to the Serial
// Monitor

delay(20); // delay for 0.2 seconds
}
