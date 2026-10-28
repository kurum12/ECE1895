//edit by Weishuhan Mei
void setup() {
  pinMode(8, OUTPUT);       // LED1
  pinMode(9, OUTPUT);       // LED2
  pinMode(10, OUTPUT);      // LED3
  pinMode(2, INPUT_PULLUP); // swtich 
}

void loop() {
  if (digitalRead(2) == LOW) {  // press button 
      digitalWrite(8, HIGH);   // light up led1
      delay(500); 
      digitalWrite(8, LOW); 
      digitalWrite(9, HIGH);    // light up led2
      delay(500);
      digitalWrite(9, LOW); 
      digitalWrite(10, HIGH);    // light up led3
      delay(500);
      digitalWrite(10, LOW);
    }
  else{
    // light close
    digitalWrite(8, LOW);      
    digitalWrite(9, LOW);
    digitalWrite(10, LOW);
  }
}
