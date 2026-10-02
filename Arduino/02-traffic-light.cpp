#include <Arduino.h>

// Let's go we are gonna do a small project.
// it is traffic light's one

// Note all these pins are Digital Pins

int redPin = 4;
int yellowPin = 8;
int greenPin = 12;

int Delay_c = 3000;
int Delay_y = 1000;

void setup()
{
  pinMode(redPin, OUTPUT);
  pinMode(yellowPin, OUTPUT);
  pinMode(greenPin, OUTPUT);
}

void loop()
{
  digitalWrite(redPin, HIGH);
  delay(Delay_c);
  digitalWrite(redPin, LOW);

  digitalWrite(yellowPin, HIGH);
  delay(Delay_y);
  digitalWrite(yellowPin, LOW);

  digitalWrite(greenPin, HIGH);
  delay(Delay_c);
  digitalWrite(greenPin, LOW);
}