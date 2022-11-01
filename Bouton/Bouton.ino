#include <Servo.h>  // on inclut la bibliothèque pour piloter un servomoteur

Servo monServo;  // on crée l'objet monServo
const int bouton = 2;

void setup()
{
    monServo.attach(9);
    pinMode(bouton, INPUT);
    Serial. begin(9600);
}

void loop()
{
  int test = digitalRead(bouton);
  Serial. println(test);
      if(test == HIGH){
        monServo.write(90);
    }else {
        monServo.write(0);
    }
}
