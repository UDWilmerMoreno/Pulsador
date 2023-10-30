#include <Arduino.h>
#define led 16
#define boton 5
int estadoboton = 0;
void setup()
{
  pinMode(led, OUTPUT);
  pinMode(boton, INPUT);
}
void loop()
{
  estadoboton = digitalRead(boton);
  if (estadoboton == 1)
  {
    digitalWrite(led, HIGH);
    delay(200);
  }
  if (estadoboton == 0)
  {
    digitalWrite(led, LOW);
    delay(200);
  }
}