#include <Servo.h>
#include <Arduino.h>

int aux = 0;

void open_door(Servo servoMotor2, int out_ultraSonic2, int in_ultraSonic2)
{
    digitalWrite(out_ultraSonic2, LOW);
    delayMicroseconds(5);
    digitalWrite(out_ultraSonic2, HIGH);
    delayMicroseconds(10);
    time = pulseIn(in_ultraSonic2, HIGH);
    distance  = long(time * 10 /292 /2);
    if (distance > 14){
        while (aux<90)
        {
        aux++;
        servoMotor2.write(aux);
        delay(30);
        }
    }else{
        while(aux>0){
        aux--;
        servoMotor2.write(aux);
        delay(30);
        }
    }
}
