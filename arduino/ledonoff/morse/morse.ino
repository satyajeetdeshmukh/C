int LEDPin = 13;
int waitTimeOn;
int waitTimeOff = 1000;

void setup() {
  pinMode(LEDPin, OUTPUT);

}

void blink(int x){
  waitTimeOn = x;
  digitalWrite(LEDPin, HIGH);
  delay(waitTimeOn);
  digitalWrite(LEDPin, LOW);
  delay(waitTimeOff);
}

void dot(){
  blink(100);
}

void dash(){
  blink(1000);
}

void loop() {
  // sharvari is mad
  dot();dot();dot();dot();dot();dot();dot(); dot();dash();dot();dash();dot();dot();dot();dot();dash();dot();dash(); dot();dash();dot(); dot(); dot();  dot(); dot();  dot(); dot(); dot(); dash(); dash(); dot(); dash(); dash();dot(); dot();
}
