//LED Variables
Const int ledcoin = 13
Const int buttonCoin = 5

Const int ledToken1 = 12
Const int buttonToken1 = 6

Const int ledToken2 = 11  
Const int buttonToken2 = 7


//Servo variables
#include <Servo.h>

//Cerberus
Servo cerebytail;
Const int buttonCerby = 2;

//Charon
Servo charonMove;
Const int buttonCharon = 3;

//Good Ending Wall
Servo goodEnd;
Const int buttonGoodEnd =4;

//----------------------------------------------------
void setup() {
//cereberus tail movement
cerbytail.attach(8);
pinMode(buttonCerby, INPUT);

//charon moving out of the way
charonMove.attach(9);
pinMode(buttonCharon, INPUT);

//good ending wall moving
goodEnd.attach(10)
  pinMode(buttonGoodEnd, INPUT);
}
//-----------------------------------------------------
void loop() {

//Cereberus tail movement
if (digitalRead(buttonCerby) == HIGH{
  cerbytail.write(135);
} else {
  cerbytail.write(45);
}

//Charon movement
    if (digitalRead(buttonCharon) == HIGH{
  charonMove.write(135);
} else {
  charonMove.write(0);
}

//Good end movement
    if (digitalRead(buttonGoodEnd) == HIGH{
  goodEnd.write(135);
} else {
  goodEnd.write(0);
}
        }
