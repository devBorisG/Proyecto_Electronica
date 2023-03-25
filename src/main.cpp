#include <Arduino.h>
#include <temperature_sensor_fan.h>
#include <lighting_control.h>

int motor = 3; // Pin de acceso al transistor que controlara el flujo de corriente hacia el motor
int led1 = 11;
int out_ultraSonic = 10;
int in_ultraSonic = 9;

void setup()
{
  pinMode(motor, OUTPUT);
  pinMode(out_ultraSonic, OUTPUT);
  pinMode(in_ultraSonic, INPUT);
  pinMode(led1, INPUT);
  dht.begin(); //Se inicia el sensor de temperatura y humedad
  Serial.begin(9600); // Se inicia la comunicación serial  // Se inicia el sensor
}
void loop()
{
  activate_fan(motor);
  activate_light(led1,out_ultraSonic,in_ultraSonic);
}