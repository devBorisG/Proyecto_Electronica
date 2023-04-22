#include <Arduino.h>

long distance;
long time;

void activate_light(int led1, int out_ultraSonic, int in_ultraSonic)
{
    digitalWrite(out_ultraSonic, LOW); // Salida del pulso generado por el sensor ultrasonico
    delayMicroseconds(5);
    digitalWrite(out_ultraSonic, HIGH); // Envio del pulso
    delayMicroseconds(10);
    time = pulseIn(in_ultraSonic, HIGH); // Formula para medir el pulso entrante
    distance = long(0.017 * time);            // Formula para calcular la distancia del pulso entrante

    if (0 < distance <= 10)
    {
        digitalWrite(led1, HIGH);// Para indicarle a cuantos cm debe de ejecutar la acccion
    }
    else
    {
        digitalWrite(led1, LOW);
    }
    Serial.print("Distancia del Objeto:");
    Serial.print(distance);
    Serial.println(" cm");
}