void setup() {
  pinMode(8, OUTPUT);       // LED
  pinMode(2, INPUT_PULLUP); // swtich 
}

void loop() {
  if (digitalRead(2) == LOW) {  // press button 
      digitalWrite(8, HIGH);   // light up
      delay(500);   
      digitalWrite(8, LOW);    // close light
      delay(500);
    }
  else{
    digitalWrite(8, LOW);      // light close
  }
}