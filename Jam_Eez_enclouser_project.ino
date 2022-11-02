// initiating the global variables
//LED Variables
Const int ledcoin = 13
Const int buttonCoin = 5

Const int ledToken1 = 12
Const int buttonToken1 = 6

Const int ledToken2 = 11  
Const int buttonToken2 = 7


//Servo variables
#include <Servo.h>

//Cereberus
Servo cerebytail;
Const int buttonPin = 2;

//Charon
Servo charonMove;
Const int buttonPin = 3;

//Good Ending Wall
Servo goodEnd;
Const int buttonPin =4;


void setup() {
//cereberus tail movement
cerbytail.attach(8);
pinMode(buttonPin, INPUT);

//charon moving out of the way
charonMove.attach(9);
pinMode(buttonPin, INPUT);

//good ending wall moving
goodEnd.attach(10)
  pinMode(buttonPin, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:

}
