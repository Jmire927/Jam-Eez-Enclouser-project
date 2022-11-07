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
Const int buttonCereby = 2;

//Charon
Servo charonMove;
Const int buttonCharon = 3;

//Good Ending Wall
Servo goodEnd;
Const int buttonGoodEnd =4;


void setup() {
//cereberus tail movement
cerbytail.attach(8);
pinMode(buttonCereby, INPUT);

//charon moving out of the way
charonMove.attach(9);
pinMode(buttonCharon, INPUT);

//good ending wall moving
goodEnd.attach(10)
  pinMode(buttonGoodEnd, INPUT);
}

void loop() {

//Cereberus tail movement
if (digitalRead(buttonCereby) == HIGH{
  cerebytail.write(180);
} else {
  cerebytail.write(0);
}

//Charon movement
    if (digitalRead(buttonCharon) == HIGH{
  charonMove.write(90);
} else {
  charonMove.write(0);
}

//Good end movement
    if (digitalRead(buttonGoodEnd) == HIGH{
  goodEnd.write(90);
} else {
  goodEnd.write(0);
}
        }
