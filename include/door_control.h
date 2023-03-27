#include <Servo.h>
#include <Arduino.h>

void open_door(Servo servoMotor)
{
    // Desplazamos a la posición 0º
    servoMotor.write(0);
    // Esperamos 1 segundo
    delay(1000);

    // Desplazamos a la posición 90º
    servoMotor.write(90);
    // Esperamos 1 segundo
    delay(1000);

    // Desplazamos a la posición 180º
    servoMotor.write(180);
    // Esperamos 1 segundo
    delay(1000);
}
