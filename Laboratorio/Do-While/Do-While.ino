const int ledPin = 2;

void setup() {
  pinMode(ledPin, OUTPUT);
  
}

void loop() {
  int blinkCounter = 0;

  do {
    digitalWrite(2, HIGH);
    delay(200);
    digitalWrite(2, LOW);
    delay(200);
    blinkCounter++;

  } while (blinkCounter < 5);
  
delay (2000);

}
