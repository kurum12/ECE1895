// Modified by Weike Ye
const byte leds[] = {8, 9, 10};
const byte button = 2;

void setup() {
  pinMode(button, INPUT_PULLUP);

  for (byte i = 0; i < 3; i++) {
    pinMode(leds[i], OUTPUT);
    digitalWrite(leds[i], LOW);
  }
}

void loop() {
  if (digitalRead(button) == LOW) {
    for (byte i = 0; i < 3; i++) {
      digitalWrite(leds[i], HIGH);
      delay(300);
      digitalWrite(leds[i], LOW);
      delay(150);
    }
  }
}
