#include <Arduino.h>
#include <DHT.h>

#define DHTPIN 2          // Seleccionamos el pin en el que se conectará el sensor
#define DHTTYPE DHT11     // Se selecciona el DHT11 que es el que tenemos
DHT dht(DHTPIN, DHTTYPE); // Se inicia una variable que será usada por Arduino para comunicarse con el sensor

void setup()
{
  Serial.begin(9600); // Se inicia la comunicación serial
  dht.begin();        // Se inicia el sensor
}
void loop()
{
  float h = dht.readHumidity();    // Se lee la humedad
  float t = dht.readTemperature(); // Se lee la temperatura
  // Se imprimen las variables
  Serial.print("Humedad: ");
  Serial.print(h);
  Serial.println(" %");
  Serial.print("Temperatura: ");
  Serial.print(t);
  Serial.println(" C");
  delay(2000); // Se espera 2 segundos para seguir leyendo //datos
}