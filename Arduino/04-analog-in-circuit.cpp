#include <Arduino.h>

// Lets learn Analog In type of circuits!
// this is the part, where it is pretty confusing part for me, when i first learn long ago.

// the analog in pins are located, at section ANALOG IN, you find their pin names start with 'A'

// We use Analog In pins to see how the data is working in serial monitor(we can see it in computer).

// Analog pins checks the voltage, and outputs the data in digital.

uint16_t analogPin = A0; // we initilised analog pin!
uint16_t readValue; // the read value, its digital one, we will read it!
float analogValue; // we'll convert it back to analog like V(volts or potential difference)

void setup()
{
  pinMode(analogPin, INPUT); // well, you might misunderstand, input means user-input?
  // Nope it isn't, it just checks how much voltage is there, where the pin is connected.

  // User-Input will be comming sooner don't worry :)

  Serial.begin(9600); //  it transfer this much amount of data to the Serial monitor 
}

void loop()
{
  // Now connect the pin where you want to read the voltage.

  readValue = analogRead(analogPin); // it reads the data, returns as an integer

  // btw analogRead stores 10-bit data
  // it represents 0V as 0 and 5V as 1023, we can convert it, like doing some math.

  analogValue = (readValue * 5)/1023;

  Serial.print("Read Value: "); // serial monitor's print method
  Serial.println(readValue); // ln for line, like means this line has ended and start a new line next.
  Serial.print("Analog Value: ");
  Serial.println(analogValue);

  delay(1000); 
  // to check serial monitor, you can see plug icon in bottom section in vscode OR
  // Shortcut-Key: Ctrl+Alt+S
  // btw i use Plateio in VScode
}