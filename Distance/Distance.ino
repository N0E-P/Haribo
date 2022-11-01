#include <Servo.h>
Servo monServo;

#define echoPin 6
#define trigPin 7
int distance;

void setup()
{
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  monServo.attach(9);
  Serial. begin(9600);
}

void loop()
{
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
  distance = pulseIn(echoPin, HIGH) * 0.034 / 2;

  if (distance < 10  ) {
    monServo.write(90);
    delay(500);
  } else {
    monServo.write(0);
    delay(50);
  }
}
