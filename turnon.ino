int motor1pin1 = 3;
int motor1pin2 = 4;
int enable1 = 9;

int motor2pin1 = 6;
int motor2pin2 = 7;
int enable2 = 5;

void setup() {
  Serial.begin(9600); // CRITICAL: Start serial communication
  
  pinMode(motor1pin1, OUTPUT);
  pinMode(motor1pin2, OUTPUT);
  pinMode(motor2pin1, OUTPUT);
  pinMode(motor2pin2, OUTPUT);
  pinMode(enable1, OUTPUT);
  pinMode(enable2, OUTPUT);
}

void moveForward(int speed) {
  digitalWrite(motor1pin1, HIGH); digitalWrite(motor1pin2, LOW);
  digitalWrite(motor2pin1, HIGH); digitalWrite(motor2pin2, LOW);
  analogWrite(enable1, speed);    analogWrite(enable2, speed);
}

void moveBackward(int speed) {
  digitalWrite(motor1pin1, LOW);  digitalWrite(motor1pin2, HIGH);
  digitalWrite(motor2pin1, LOW);  digitalWrite(motor2pin2, HIGH);
  analogWrite(enable1, speed);    analogWrite(enable2, speed);
}

void turnLeft(int speed) {
  // Motor 1 Back, Motor 2 Forward
  digitalWrite(motor1pin1, LOW);  digitalWrite(motor1pin2, HIGH);
  digitalWrite(motor2pin1, HIGH); digitalWrite(motor2pin2, LOW);
  analogWrite(enable1, speed);    analogWrite(enable2, speed);
}

void turnRight(int speed) {
  // Motor 1 Forward, Motor 2 Back
  digitalWrite(motor1pin1, HIGH); digitalWrite(motor1pin2, LOW);
  digitalWrite(motor2pin1, LOW);  digitalWrite(motor2pin2, HIGH);
  analogWrite(enable1, speed);    analogWrite(enable2, speed);
}

void stopMotors() {
  analogWrite(enable1, 0);
  analogWrite(enable2, 0);
}

void loop() {
  if(Serial.available() > 0){
    char command = Serial.read();
    if(command == 'F') moveForward(250);
    else if(command == 'B') moveBackward(250);
    else if(command == 'L') turnLeft(250);
    else if(command == 'R') turnRight(250);
    else if(command == 'S') stopMotors(); // Added stop command
  }
}