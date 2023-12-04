#define servoPin A3 
int pos; 
int pulsewidth;

void setup() {
  pinMode(servoPin, OUTPUT);
  procedure(0);
}

void loop() {
  for (pos = 50; pos <= 170; pos += 3) {
    procedure(pos);
    delay(15);
  }
  for (pos = 170; pos >= 50; pos -= 3) {
    procedure(pos);
    delay(15);
  }
}
  
void procedure(int myangle) {
  pulsewidth = myangle * 11 + 500;
  digitalWrite(servoPin,HIGH);
  delayMicroseconds(pulsewidth);
  digitalWrite(servoPin,LOW);
  delay((20 - pulsewidth / 1000));
}