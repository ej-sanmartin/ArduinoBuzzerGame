int ledPin = 13; // this pin in arduino to be connected and work with LED
const int buzzer = 9; // this pin in arduino to be connected and work with the Buzzer component

void setup(){
  pinMode(ledPin, OUTPUT);
  pinMode(buzzer, INPUT);
}

void loop(){
  tone(buzzer, 1000);
  digitalWrite(LED_BUILTIN, HIGH);
  delay(30000); // you have 30 seconds to beat game
  digitalWrite(LED_BUILTIN, LOW);
  delay(10000); // will restart itself in 10 seconds
}
