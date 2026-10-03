#include <Arduino.h>

// Heyo, i did this in tinkercad still learning though, i dont have physical 7-segment display

// Thank god, i didn't bought this back then, this thing took whole 2hrs for me +_+

// the logic is simple, but yeah there is a bit difference here

// Like common ground and common supply OR they named it like common cathode or common anode.

// the 7-segment display comes with these, either they are common cathode or common anode, i did this in common cathode.

// i gotta learn schemetic analysis though, sometimes i wired and short-circuit my arduino lol(simulator)

uint8_t A = 10;
uint8_t B = 9;
uint8_t C = 2;
uint8_t D = 5;
uint8_t E = 6;
uint8_t F = 7;
uint8_t G = 8;
uint8_t DP = 3;

const bool Value[10][8] = 
 {
  {1,1,1,1,0,1,1,0}, {1,1,1,1,1,1,1,0},
  {1,1,1,0,0,0,0,0}, {1,0,1,1,1,1,1,0},
  {1,0,1,1,0,1,1,0}, {0,1,1,0,0,1,1,0},
  {1,1,1,1,0,0,1,0}, {1,1,0,1,1,0,1,0},
  {0,1,1,0,0,0,0,0}, {1,1,1,1,1,1,0,0}
 };

void setup()
{
  pinMode(A, OUTPUT);
  pinMode(B, OUTPUT);
  pinMode(C, OUTPUT);
  pinMode(D, OUTPUT);
  pinMode(E, OUTPUT);
  pinMode(F, OUTPUT);
  pinMode(G, OUTPUT);
  pinMode(DP, OUTPUT);
}

void loop()
{  
  for(uint8_t i = 0; i < 10; i++)
  { 
    digitalWrite(A, Value[i][0]);
    digitalWrite(B, Value[i][1]);
    digitalWrite(C, Value[i][2]);
    digitalWrite(D, Value[i][3]);
    digitalWrite(E, Value[i][4]);
    digitalWrite(F, Value[i][5]);
    digitalWrite(G, Value[i][6]);
    digitalWrite(DP, Value[i][7]);
    
    delay(1000);
  }
}