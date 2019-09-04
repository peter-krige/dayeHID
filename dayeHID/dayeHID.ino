/*
  Uses KeyboardControl

  Acts as an HID devices, sending keyboard commands to the machine's computer
   
*/

#include "Keyboard.h"


// set pin numbers for the five buttons:
const int spaceBar = 3;
const int p1 = 9;
const int p2 = 6;
const int p3 = 5;
const int p4 = 12;
const int togglePump = 11;
const int resetTo = 10;



void setup() { 


  // initialize the buttons' inputs:
  pinMode(spaceBar, INPUT);   // " "
  pinMode(p1, INPUT);         // "1"
  pinMode(p2, INPUT);         // "2"
  pinMode(p3, INPUT);         // "3"
  pinMode(p4, INPUT);         // "4"
  pinMode(togglePump, INPUT); // "e"
  pinMode(resetTo, INPUT);    // "g"

  //Serial open for de-bug
  Serial.begin(9600);
  Keyboard.begin();
}

void loop() 
{

  // Get the updated value :
  int value1 = digitalRead(spaceBar);
  delay(100);
  int value2 = digitalRead(spaceBar);                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                          

// use the pushbuttons to control the keyboard:  
  if (value1 == HIGH && value2 == HIGH){
    Keyboard.write(' ');
    delay(1000);
    //delay = (200*90)/1000 = 20 seconds
//    for (int i=0; i<=90; i++){
//      delay(200);
//    }
//    
  }
   if(digitalRead(p1) == HIGH)
   {
    Keyboard.write('1');
    delay(1000);
   }
   
   if(digitalRead(p2) == HIGH)
   {
    Keyboard.write('2');
    delay(1000);
   }

   if(digitalRead(p3) == HIGH)
   {
    Keyboard.write('3');
    delay(1000);
   }

   if(digitalRead(p4) == HIGH)
   {
    Keyboard.write('4');
    delay(1000);
   }

   if(digitalRead(togglePump) == HIGH)
   {
    Keyboard.write('e');
    delay(1000);
   }

   if(digitalRead(resetTo) == HIGH)
   {
    Keyboard.write('g');
    delay(1000);
   }                                    
       
} 
                                                                                                                                                                                                       
