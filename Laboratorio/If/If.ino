const int ledPin=2;
const unsigned long interval = 250;

unsigned long previousMillis = 0;
int ledState = LOW;

void setup() {
  pinMode(ledPin, OUTPUT);

}

void loop() {
  unsigned long currentMillis = millis();

  if (currentMillis - previousMillis >= interval){

    previousMillis = currentMillis;

    if (ledState == LOW){
      ledState = HIGH;

    } else{
      ledState=LOW;
    }

    digitalWrite(ledPin, ledState);
  }
}
