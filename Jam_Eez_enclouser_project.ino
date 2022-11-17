  //LED Variables
const int ledcoin = 13;
const int ledToken1 = 12;
const int ledToken2 = 11  ;

//Servo variables
#include <Servo.h>;

//Cerberus
Servo cerbytail;
const int buttonCerby = 2;
int pos = 0; 

//Charon
Servo charonMove;
const int buttonCharon = 3;
int buttonCharonState = 0;
int lastButtonCharonState = 0;
bool boolcharon = false;
const int buttonCoin = 5;
int buttonCoinState = 0;
int lastButtonCoinState = 0;
bool boolcoin = false;

//Good Ending Wall
Servo goodEndMove;
const int buttonGoodEnd =4;
int buttonGoodEndState = 0;
int lastButtonGoodEndState = 0;
bool boolGoodEnd = false;
const int buttonToken = 6;
int buttonTokenState = 0;
int lastButtonTokenState = 0;
bool boolToken = false;

//----------------------------------------------------
void setup() {
Serial.begin(9600);
Serial.println("Start");
  
//cereberus tail movement
cerbytail.attach(8);
pinMode(buttonCerby, INPUT);

//charon moving out of the way
charonMove.attach(10);
pinMode(buttonCharon, INPUT);
pinMode(buttonCoin, INPUT);


//good ending wall moving
goodEndMove.attach(9);
  pinMode(buttonGoodEnd, INPUT);
  pinMode(buttonToken, INPUT);

}
//-----------------------------------------------------
void loop() {

//Cereberus tail movement
  for (pos = 45; pos <= 135; pos += 1) { 
    // in steps of 1 degree
    cerbytail.write(pos);              
    delay(5);                       
  }
  for (pos = 135; pos >= 45; pos -= 1) { 
    cerbytail.write(pos);              
    delay(5);                       
  }



//Charon movement
buttonCharonState = digitalRead(buttonCharon);
buttonCoinState = digitalRead(buttonCoin);

    //read charon tile
if (buttonCharonState != lastButtonCharonState){
if (digitalRead(buttonCharon) == HIGH){
  boolcharon = true; 
}
}

    //read coin button
if (buttonCoinState != lastButtonCoinState){
if (digitalRead(buttonCoin) == HIGH){
  boolcoin = true; 
}
}

if (boolcharon && boolcoin){
  Serial.println("the end");
  charonMove.write(180);
} else {
  charonMove.write(0);
}

//Good end movement
buttonGoodEndState = digitalRead(buttonGoodEnd);
buttonTokenState = digitalRead(buttonToken);

    //read good end tile
if (buttonGoodEndState != lastButtonGoodEndState){
if (digitalRead(buttonGoodEnd) == HIGH){
  boolGoodEnd = true; 
}
}

    //read token button
if (buttonTokenState != lastButtonTokenState){
if (digitalRead(buttonToken) == HIGH){
  boolToken = true; 
}
}

if (boolGoodEnd && boolToken == true){
   goodEndMove.write(135);
 Serial.println("the end");
} else {
  goodEndMove.write(0);
}
lastButtonGoodEndState == buttonGoodEndState;
lastButtonTokenState == buttonTokenState;
        }
        
