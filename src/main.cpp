#include <Arduino.h>
#include <temperature_sensor_fan.h>
#include <lighting_control.h>
#include <door_control.h>
#include <Servo.h>

int motor = 3; // Pin de acceso al transistor que controlara el flujo de corriente hacia el motor
int servo = 5; // Pon de acceso para el servoMotor
int led1 = 11;
int out_ultraSonic = 10; //TRIGGER
int in_ultraSonic = 9; //ECHO
Servo servoMotor;

void setup()
{
  pinMode(motor, OUTPUT);
  pinMode(out_ultraSonic, OUTPUT);
  pinMode(in_ultraSonic, INPUT);
  pinMode(led1, INPUT);
  dht.begin(); //Se inicia el sensor de temperatura y humedad
  Serial.begin(9600); // Se inicia la comunicación serial  // Se inicia el sensor
  servoMotor.attach(servo);
}
void loop()
{
  activate_fan(motor);
  activate_light(led1,out_ultraSonic,in_ultraSonic);
  open_door(servoMotor);
}