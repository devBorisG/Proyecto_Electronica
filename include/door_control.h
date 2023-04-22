#include <Servo.h>
#include <Arduino.h>

void open_door(Servo servoMotor)
{
    servoMotor.write(0); // Desplazamos a la posición 0º
    delay(1000);         // Esperamos 1 segundo

    servoMotor.write(90); // Desplazamos a la posición 90º
    delay(1000);          // Esperamos 1 segundo

    servoMotor.write(180); // Desplazamos a la posición 180º
    delay(1000);           // Esperamos 1 segundo
}
