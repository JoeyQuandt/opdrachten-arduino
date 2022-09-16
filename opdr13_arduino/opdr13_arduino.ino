// Read data from the serial and turn ON or OFF a light depending on the value
char val; // Data received from the serial port
int speakerPin = 13; // Set ledPin to 13
void setup() {
pinMode(speakerPin, OUTPUT); // Set ledPin as OUTPUT
Serial.begin(9600); // Start serial communication at 9600 bps
}
void loop() {
while (Serial.available()) { // If data is available to read,
 val = Serial.read(); // read it and store it in val
}
if (val == 'H') { // If H was received
 tone(speakerPin, 800, 200);
}
else {
 tone(speakerPin, 0, 200);
}
delay(100); // Wait 100 milliseconds for next reading
}
