const int ledPin = 2;

void setup() {
  pinMode(ledPin, OUTPUT);
}

void loop() {

  for (int i = 0; i < 5; i++){
    digitalWrite(2, HIGH);
    delay(500);
    digitalWrite(2, LOW);
    delay(500);
  }

  delay(2000);
  
}
