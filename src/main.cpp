#include <Arduino.h>
#include <temperature_sensor_fan.h>
#include <lighting_control.h>
#include <door_control.h>
#include <Servo.h>
#include <parking.h>

int motor = 3; // Pin de acceso al transistor que controlara el flujo de corriente hacia el motor
int servo1 = 5; // Pon de acceso para el servoMotor de la puerta
int servo2 = 8; // Pin de acceso para el servoMotor del parqueadero
int led1 = 11;
int out_ultraSonic = 10; //TRIGGER
int out_ultraSonic2 = 6;// Trigger
int in_ultraSonic = 9; //ECHO
int in_ultraSonic2 = 7; // Echo
Servo servoMotor1;
Servo servoMotor2;

void setup()
{
  pinMode(motor, OUTPUT);
  pinMode(out_ultraSonic, OUTPUT);
  pinMode(in_ultraSonic, INPUT);
  pinMode(out_ultraSonic2, OUTPUT);
  pinMode(in_ultraSonic2, INPUT);
  pinMode(led1, INPUT);
  dht.begin(); //Se inicia el sensor de temperatura y humedad
  Serial.begin(9600); // Se inicia la comunicación serial  // Se inicia el sensor
  servoMotor1.attach(servo1);
  servoMotor2.attach(servo2);
}
void loop()
{
  activate_fan(motor);
  activate_light(led1,out_ultraSonic,in_ultraSonic);
  open_door(servoMotor1, out_ultraSonic2, in_ultraSonic2);
  open_parking(servoMotor2);
}