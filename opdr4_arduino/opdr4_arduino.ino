int greenLedPin = 10;
int yellowLedPin = 9;

int brightnessGreen;
int brightnessYellow;

void setup() {
pinMode(greenLedPin, OUTPUT);
pinMode(yellowLedPin, OUTPUT);
}

void loop() {
// analogWrite(greenLedPin, 255); // turn on the green LED maximally
// analogWrite(yellowLedPin, 128); // turn on the yellow LED half way
// delay(1000); // wait one second
//
// analogWrite(greenLedPin, 0); // turn the green LED off
// analogWrite(yellowLedPin, 255); // turn on the yellow LED maximally
// delay(1000); // wait one second

for (int brightnessGreen=0; brightnessGreen <256; brightnessGreen++){
analogWrite(greenLedPin, brightnessGreen);
analogWrite(yellowLedPin, 255 - brightnessGreen);
delay(10);
}
}
