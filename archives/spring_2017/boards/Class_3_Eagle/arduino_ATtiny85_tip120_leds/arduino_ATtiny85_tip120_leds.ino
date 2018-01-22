void setup() {
  pinMode(A2, INPUT);
  pinMode(0, OUTPUT);
  pinMode(1, OUTPUT);
}

void loop() {
  int val = analogRead(A2) / 4;
  analogWrite(0, val);
  analogWrite(1, val);
}
