#include <Arduino.h>
#include <temperature_sensor_fan.h>

void setup()
{
  dht.begin(); //Se inicia el sensor de temperatura y humedad
  Serial.begin(9600); // Se inicia la comunicación serial  // Se inicia el sensor
}
void loop()
{
  monitor_temperature();
}