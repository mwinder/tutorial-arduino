
const int switchState = 2;
const int greenLED = 3;
const int redLED1 = 4;
const int redLED2 = 5;

void setup() {
  pinMode(greenLED, OUTPUT);
  pinMode(redLED1, OUTPUT);
  pinMode(redLED2, OUTPUT);
  pinMode(switchState, INPUT);
}

void loop() {
  const int timeDelay = 500;

  if (digitalRead(switchState) == LOW) { // button not pressed
    turnOn(greenLED);
    turnOff(redLED1);
    turnOff(redLED2);
  }
  else {
    turnOff(greenLED);

    turnOff(redLED1);
    turnOn(redLED2);
    delay(timeDelay);

    turnOn(redLED1);
    turnOff(redLED2);
    delay(timeDelay);
  }
}

void turnOff(int led) {
  digitalWrite(led, LOW);
}

void turnOn(int led) {
  digitalWrite(led, HIGH);
}