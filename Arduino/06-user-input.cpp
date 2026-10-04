#include <Arduino.h>

// Well, since i don't have any buttons currently.
// Let's try User Input to turn on the LED

uint8_t readPin = 2; // its a digital pin
String userInput; // we are taking userInput as string

void setup()
{
  pinMode(readPin, OUTPUT);

  Serial.begin(9600);
}

void loop()
{
  Serial.println("Enter an input \"on\" or \"off\": "); // prompt


  // usually this function called "loop" loops around to print the prompt again and again

  while(Serial.available() == 0){} // available method from Serial checks did the user send a message in serial monitor

  // well in VScode it is taking faster input +_+
  // but, arduino ide has specific section for input to send when needed, no worries if you use Arduino IDE

  userInput = Serial.readString();

  if(userInput == "on")
    digitalWrite(readPin, HIGH);
  else if(userInput == "off")
    digitalWrite(readPin, LOW);
  else
    Serial.println("Please try again, type \"on\" or \"off\":");
}