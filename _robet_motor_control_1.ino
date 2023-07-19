const int motor1speed=9;
const int motor1Pin1 = 10; 
const int motor1Pin2 = 11;
const int motor2speed=3;
const int motor2Pin1 = 4; 
const int motor2Pin2 = 5; 
char reading;

void setup() {
  pinMode(motor1Pin1, OUTPUT);
  pinMode(motor1speed, OUTPUT);
  pinMode(motor1Pin2, OUTPUT);
  pinMode(motor2speed, OUTPUT);
  pinMode(motor2Pin1, OUTPUT);
  pinMode(motor2Pin2, OUTPUT);
  Serial.begin(9600);
}
void loop() {
  if (Serial.available() > 0) {reading = Serial.read();}
  
  switch(reading) {
    case 'F':
      analogWrite(motor1speed,128);
      digitalWrite(motor1Pin1, HIGH);
      digitalWrite(motor1Pin2, LOW);
      analogWrite(motor2speed,128);
      digitalWrite(motor2Pin1, HIGH);
      digitalWrite(motor2Pin2, LOW);
      break;
    case 'B':
      analogWrite(motor1speed,128);
      digitalWrite(motor1Pin1, LOW);
      digitalWrite(motor1Pin2, HIGH);
      analogWrite(motor2speed,128);
      digitalWrite(motor2Pin1, LOW);
      digitalWrite(motor2Pin2, HIGH);
      break;
    case 'L':
      analogWrite(motor1speed,128);
      digitalWrite(motor1Pin1, HIGH);
      digitalWrite(motor1Pin2, LOW);  
      analogWrite(motor2speed,0);
      digitalWrite(motor2Pin1, HIGH);
      digitalWrite(motor2Pin2, LOW);
      break;
    case 'R':
      analogWrite(motor1speed,0);
      digitalWrite(motor1Pin1, HIGH);
      digitalWrite(motor1Pin2, LOW);
      analogWrite(motor2speed,128);
      digitalWrite(motor2Pin1, HIGH);
      digitalWrite(motor2Pin2, LOW);
      break;
    case 'S':
      analogWrite(motor1speed,0);
      analogWrite(motor2speed,0);
      break;
  }
}
