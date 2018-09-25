int LEDPin = 13;
int waitTimeOn = 1000;
int waitTimeOff = 10000;

void setup() {
  pinMode(LEDPin, OUTPUT);

}

void loop() {

  digitalWrite(LEDPin, HIGH);
  delay(waitTimeOn);
  digitalWrite(LEDPin, LOW);
  delay(waitTimeOff);

}
