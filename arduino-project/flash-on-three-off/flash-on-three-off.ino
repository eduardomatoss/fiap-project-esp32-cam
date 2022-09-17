void setup() {
  pinMode(4, OUTPUT);
}

void loop() {
  digitalWrite(4, HIGH); // turn on the led to port 4
  delay(500); // sleep 500ms
  digitalWrite(4, LOW); // off the led of port 4
  delay(500); // sleep 500ms
  digitalWrite(4, HIGH); // turn on the led to port 4
  delay(500); // sleep 500ms
  digitalWrite(4, LOW); // off the led of port 4
  delay(500); // sleep 500ms
  digitalWrite(4, HIGH); // turn on the led to port 4
  delay(500); // sleep 500ms
  digitalWrite(4, LOW); // off the led of port 4
  delay(2000); // sleep 2sec
}
