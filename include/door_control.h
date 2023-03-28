#include <Servo.h>
#include <Arduino.h>

void open_door(Servo servoMotor)
{
    // Desplazamos a la posición 90º
    servoMotor.write(90);
    // Esperamos 1 segundo
    delay(4000);

    // Desplazamos a la posición 180º
    servoMotor.write(250);
    // Esperamos 1 segundo
    delay(4000);
}
