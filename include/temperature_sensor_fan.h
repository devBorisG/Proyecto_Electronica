#include <Arduino.h>
#include <DHT.h>

int sensor = 2; // Pin de entrada analogo donde estara el sensor de humedad
int motor = 10; // Pin de entrada digital donde estara el motor (ventilador)
float temperature = 0; // Variable donde se almacenara el datos de temperatura 

#define DHTPIN sensor          // Seleccionamos el pin en el que se conectará el sensor
#define DHTTYPE DHT11     // Se selecciona el DHT11 que es el que tenemos
DHT dht(DHTPIN, DHTTYPE); // Se inicia una variable que será usada por Arduino para comunicarse con el sensor

void monitor_temperature()
{
    temperature = dht.readTemperature(); // Se lee la temperatura
    // Se imprimen las variables
    Serial.print("Temperatura: ");
    Serial.print(temperature);
    Serial.println(" C");
    delay(2000); // Se espera 2 segundos para seguir leyendo datos

    if(temperature>25){
        digitalWrite(motor, HIGH); //Encender el motor si la temperatura esta por encima de 25°C; se puede cambiar "HIGH" por "1", son equivalentes
    }else{
        digitalWrite(motor, LOW); //El motor se apaga si el sensor analiza temperatura por debado de los 25°c
    }
}