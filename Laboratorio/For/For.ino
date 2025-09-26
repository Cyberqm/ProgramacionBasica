const int ledPin =2;
const int numBlinks = 5;



void setup() {
  // put your setup code here, to run once:
  pinMode(ledPin, OUTPUT);


}

void loop() {
  // put your main code here, to run repeatedly:
  for (int i=0;i<numBlinks; i++){
    digitalWrite(ledPin, HIGH);
    delay(1000);
    digitalWrite(ledPin, LOW);
    delay(1000);

  }
  delay(5000);

}
