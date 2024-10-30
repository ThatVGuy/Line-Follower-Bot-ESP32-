const int motor1pos
const int motor1neg
const int motor2pos
const int motor2neg

void setup() {
  Serial.begin(115200);

}

void loop() {
  motor1FWD(100);
  motor2RVS(100);
  delay(1000);
  motor2FWD(100);
  motor1RVS(100);
  delay(1000);
}

void motorStop() {
  digitalWrite(motor1pos, 0)
  digitalWrite(motor1neg, 0)
  digitalWrite(motor2pos, 0)
  digitalWrite(motor2neg, 0)
}

void motor1FWD(int speed) {
  analogWrite(motor1pos, speed);
  digitalWrite(motor1neg, 0)
}

void motor1RVS(int speed) {
  analogWrite(motor1neg, speed);
  digitalWrite(motor1pos, 0)
}

void motor2FWD(int speed) {
  analogWrite(motor2pos, speed);
  digitalWrite(motor2neg, 0)
}

void motor2RVS(int speed) {
  analogWrite(motor2neg, speed);
  digitalWrite(motor2pos, 0)
}