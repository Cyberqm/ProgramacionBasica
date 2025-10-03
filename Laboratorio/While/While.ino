const int ledPin=2;

void setup() {
  
  pinMode(ledPin, OUTPUT); 
  
}

void loop() {

  while(true){
    digitalWrite(2, HIGH);
    delay(1000);
    digitalWrite(2, LOW);
    delay(1000);
  }
  

}
