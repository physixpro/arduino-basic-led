#include <Arduino.h>

#define MY_LED A5
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(MY_LED, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
int sensorValue = analogRead(A4);
float voltage= sensorValue * (5.0 / 1023.0);


  digitalWrite(MY_LED, HIGH);
 Serial.println(voltage);
  delay(2000);
  digitalWrite(MY_LED,LOW);
  delay(2000);
   Serial.println(voltage);
  // Serial.println(voltage);
}