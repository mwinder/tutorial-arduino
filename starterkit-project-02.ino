int switchState = 0;
int timeDelay = 750;

void setup() {
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(2, INPUT);
}

void loop(){
  switchState = digitalRead(2);

  if (switchState == LOW) { // button not pressed
    digitalWrite(5, LOW);  // red
    digitalWrite(4, LOW);  // red
    digitalWrite(3, LOW); // green
  }
  else {
    for (int i = 0; i < 21; i++)
    {
      digitalWrite(5, LOW);
      digitalWrite(4, LOW);
      digitalWrite(3, LOW);

      if (i % 3 == 0) {
        digitalWrite(3, HIGH);
      }
      if (i % 3 == 1) {
        digitalWrite(4, HIGH);
      }
      if (i % 3 == 2) {
        digitalWrite(5, HIGH);
      }

      delay(timeDelay);
    }
  }
}

/*void loop() {
  switchState = digitalRead(2);

  if (switchState == LOW) { // button not pressed
    digitalWrite(5, HIGH);  // red
    digitalWrite(4, HIGH);  // red
    digitalWrite(3, HIGH); // green
  }
  else {
    digitalWrite(5, HIGH);
    digitalWrite(4, HIGH);
    digitalWrite(3, LOW);
    delay(timeDelay);

    digitalWrite(5, HIGH);
    digitalWrite(4, LOW);
    digitalWrite(3, HIGH);
    delay(timeDelay);

    digitalWrite(5, LOW);
    digitalWrite(4, HIGH);
    digitalWrite(3, HIGH);
    delay(timeDelay);

    digitalWrite(5, LOW);
    digitalWrite(4, LOW);
    digitalWrite(3, LOW);
    delay(timeDelay);

    digitalWrite(5, HIGH);
    digitalWrite(4, LOW);
    digitalWrite(3, LOW);
    delay(timeDelay);

    digitalWrite(5, LOW);
    digitalWrite(4, HIGH);
    digitalWrite(3, LOW);
    delay(timeDelay);

    digitalWrite(5, LOW);
    digitalWrite(4, LOW);
    digitalWrite(3, HIGH);
    delay(timeDelay);

    digitalWrite(5, LOW);
    digitalWrite(4, LOW);
    digitalWrite(3, LOW);
    delay(timeDelay);
  }
}*/
