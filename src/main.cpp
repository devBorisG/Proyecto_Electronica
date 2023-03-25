#include <Arduino.h>
#include <temperature_sensor_fan.h>

int motor = 3; // Pin de acceso al transistor que controlara el flujo de corriente hacia el motor

void setup()
{
  pinMode(motor, OUTPUT);
  dht.begin(); //Se inicia el sensor de temperatura y humedad
  Serial.begin(9600); // Se inicia la comunicación serial  // Se inicia el sensor
}
void loop()
{
  activate_fan(motor);
}