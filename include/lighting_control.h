#include <Arduino.h>

long dis;
long tiem;

void activate_light(int led1, int out_ultraSonic, int in_ultraSonic){
    digitalWrite(out_ultraSonic,LOW); // Salida del pulso generado por el sensor ultrasonico
    delayMicroseconds(5);
    digitalWrite(out_ultraSonic, HIGH); // Envio del pulso
    delayMicroseconds(10);
    tiem=pulseIn(in_ultraSonic, HIGH); // Formula para medir el pulso entrante
    dis=long(0.017*tiem); // Formula para calcular la distancia del pulso entrante

    if(0 < dis <= 10){ // Para indicarle a cuantos cm debe de ejecutar la acccion
        digitalWrite(led1, HIGH);
    }else{
        digitalWrite(led1, LOW);
    }
    Serial.print("Distancia del Objeto:");
    Serial.print(dis);
    Serial.println(" cm");
}