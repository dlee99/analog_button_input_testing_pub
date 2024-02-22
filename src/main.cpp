//ldouglas
//version 1.0
//February 20, 2024

#include <Arduino.h>
#include <Adafruit_GFX.h>
#include <ezButton.h>
#include <Streaming.h>

#define A2 GPIO_NUM_34

void setup() {
  pinMode(A2, INPUT);

  Serial.begin(115200);
}

void loop() {
  Serial << digitalRead(A2) << endl;
  delay(500);
}
