int en = 5, dir = 6, pull = 7;


void setup() {
  // put your setup code here, to run once:
  pinMode(en, OUTPUT);
  pinMode(dir, OUTPUT);
  pinMode(pull, OUTPUT);
  digitalWrite(en, LOW);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(dir, HIGH);
  for (int i = 0; i < 1600; i++){
    digitalWrite(pull, HIGH);
    delayMicroseconds(500);
    digitalWrite(pull, LOW);
    delayMicroseconds(500);
  }
  delay(1000);
  digitalWrite(dir, LOW);
  for (int i = 0; i < 1600; i++){
    digitalWrite(pull, HIGH);
    delayMicroseconds(500);
    digitalWrite(pull, LOW);
    delayMicroseconds(500);
  }
  delay(1000);
  digitalWrite(en, HIGH);

}
