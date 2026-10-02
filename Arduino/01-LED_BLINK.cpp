// Hello! Everyone I'm Back!

// Let's tinker some microcontrollers

// Long story short, i gave up doing this long ago, because, i kinda crammed, and now let's start it again!

#include <Arduino.h> // here is the Arduino headerfile, this headerfile has some useful methods, classes and more.
#define DELAY 1000 // i defined a delay time in milli-seconds

int pin = 4; // in my Arduino board, the pin # 4 is Digital Pin

// What do you mean by digital pin, as the name says, digital is bits either 0 or 1

// through that we control the how the pin will output

// in a microcontroller, there is set of GPIO pins,
// GPIO = General-Purpose-Input-Output

void setup() // Arduino's setup function, it initialises these pins, we chose to work
{
  pinMode(pin, OUTPUT);
//  |       |     |
//  |       |     +---> it is MODE of the pin
//  |       +----> it is pin number
//  +--> it is pinMode function, as the name as it sets the pin mode, mode like in the sense INPUT or OUTPUT
}

void loop() // it is a loop function which repeats again and again
{
  digitalWrite(pin, HIGH); 
  /* digitalWrite function, these function asks what pin do i need 
  to select and what value do i have to write to the pin and thats 
  it*/
  delay(DELAY); // delay function, it delays the micocontroller to stay in these for these x ms(milli-seconds),
  // also delayMicro seconds exists i believe.
  digitalWrite(pin, LOW);
  delay(DELAY);
}