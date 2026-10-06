#include <Arduino.h>

uint8_t transPin = 12;
uint8_t echoPin = 11;
float distance, duration;

uint8_t redPin = 7;
uint8_t bluePin = 4;
uint8_t greenPin = 2;

void setup()
{
  pinMode(transPin, OUTPUT);
  pinMode(echoPin, INPUT);

  pinMode(redPin, OUTPUT);
  pinMode(bluePin, OUTPUT);
  pinMode(greenPin, OUTPUT);

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
    if(distance >= 10)
    {
      digitalWrite(redPin, HIGH);
      digitalWrite(bluePin, LOW);
      digitalWrite(greenPin, LOW);
    }
    else if(10 < distance >= 20)
    {
      digitalWrite(redPin, LOW);
      digitalWrite(bluePin, HIGH);
      digitalWrite(greenPin, LOW);
    }
    else if(20 < distance)
    {
      digitalWrite(redPin, LOW);
      digitalWrite(bluePin, LOW);
      digitalWrite(greenPin, HIGH);
    }

    Serial.print("cm: ");
    Serial.println(distance);
    delay(500);
  }
}