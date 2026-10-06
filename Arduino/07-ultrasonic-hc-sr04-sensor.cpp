#include <Arduino.h>

// Lets try sensors, the model is HC-SR04 sensor, im using, it got transmitter pin and echo pin
// and also with power pins

// the method of sensor senses the distance by emitting ultra sonic wave and when it touches,
// an object it results back to receiver, that will be in Micro Seconds

uint8_t transPin = 12;
uint8_t echoPin = 11;
float distance, duration;

void setup()
{
  pinMode(transPin, OUTPUT);
  pinMode(echoPin, INPUT);

  Serial.begin(9600);
}

void loop()
{
  digitalWrite(transPin, LOW);
  delayMicroseconds(5);
  digitalWrite(transPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(transPin, LOW);

  pinMode(echoPin, INPUT);
  duration = pulseIn(echoPin, HIGH);

  distance = (duration * 0.0343)/2.0;

  if(distance <= 40)
  {
    Serial.print("cm: ");
    Serial.println(distance);
    delay(500);
  }
}