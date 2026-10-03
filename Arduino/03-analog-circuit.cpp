#include <Arduino.h>

// Okay Let's start about analog pins!
// analog pins has '~' sign on their pin number, PWM section

// analog pins outputs like AC, but it isn't actually AC though

// it uses a method called Pulse-Width-Modulation
// PWM is per every clock cycle of the circuit, it switches of depending on the user input,
// lets say user chose 25% of max.

/*
            +-------> DC output of voltage
  |         |
  |--------------------
V |      |     |
  |      |     |           ----> The blocks you are seeing is duty-cycle of internal clock of the
  |      | t_d |                 circuit, and i represented it as t_d
  |      | <-->|
  +------------------->
          t

                            |
                            |(PWM for 25%)
                            |
  |
  |+    |+    |+
V | |   | |   | |
  | |   | |   | |           ------> Well the duty-cycle still remains same(internal clock speed
  | |   | |   | |                   probably, though maybe clocks harder here to switch off so    
  +----------------->               the clock speed might change), but thats not what i should talk
          t                         lets see the graph, you can see the output is on for 25% of the 
                                    time, 75% is off, thats how the output voltage is less
  */

  // LETS BEGIN TO DIM OUR LED

uint8_t analogPin = 3;  // its an analog pin!

uint8_t nextRead = 50;

void setup()
{
  pinMode(analogPin, OUTPUT);
}

void loop()
{
  for(uint8_t i = 0; i < 10; i++) // for brightness change at a time :)
  {
    if(nextRead == 250)
    {
      nextRead = 0;
    }

    analogWrite(analogPin, nextRead);
    nextRead += 50;
    delay(800);
  }
}