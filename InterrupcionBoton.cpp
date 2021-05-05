#include <Arduino.h>

#define led   2     //Led interno de la placa
#define boton 19

void InterrupcionBoton() {
  digitalWrite(led, !digitalRead(led));
  Serial.print("Boton presionado");
}

void setup() {
  Serial.begin(9600);
  pinMode(led, OUTPUT);
  pinMode(boton, INPUT);
  attachInterrupt(boton, InterrupcionBoton, FALLING);
  Serial.println("Iniciando....");
}

void loop() {
  
}
