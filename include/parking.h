#include <Arduino.h>
#include<Servo.h>

// MIN 6
// MAX 679

void open_parking(Servo servoMotor){
    int angulo;
    int valorFR = analogRead(A0);
    Serial.print("luminosidad: ");
    Serial.println(valorFR);
    if(valorFR < 25){ //190 es relativo al lugar donde nos encontremos
        angulo = 0;
        servoMotor.write(angulo);
        delay(500);
        Serial.println(angulo);
        delay(5000);
    }else{
        angulo = 90;
        servoMotor.write(angulo);
        delay(500);
        Serial.print("angulo: ");
        Serial.println(angulo);
    }
}

/*
Servo miServo;
int angulo;

void setup()
{
  miServo.attach(11);
  pinMode(13, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  int valorFR = analogRead(A0);
  Serial.print("luminosidad: ");
  Serial.println(valorFR);
  if(valorFR < 190)
  {
    angulo= 270;
    miServo.write(angulo);
    Serial.print("angulo: ");
    Serial.println(angulo);
    delay(500);
  }
  if(valorFR > 200)
  {
    angulo= 130;
    miServo.write(angulo);
    Serial.print("angulo: ");
    Serial.println(angulo);
    delay(500);
  }
}

*/
