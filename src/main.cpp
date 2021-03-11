#include <Arduino.h>
#define LED 13

void setup() {
  Serial.begin(9600);
  pinMode(LED, OUTPUT);
  Serial.println("Start");
}

void loop() {
  digitalWrite(LED, LOW);
  Serial.println("The led is off");
  delay(1000);
  digitalWrite(LED, HIGH);
  Serial.println("The led is on");
  delay(1000);
}