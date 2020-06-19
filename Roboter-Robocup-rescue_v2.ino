/*
 * 
 * Author: Fabian Klotz
 * last date: 16.06.2020
 * this ist the newest code for our robotics-AG rescue roboter
 * 
 */



#include "motorsteuerung.h"
#include "neopixels.h"
#include "tcs230.h"
#include <Pixy2.h>        //Librarys
#include <Servo.h>

 
Pixy2 pixy;  //pixy-object

Servo hebenR;
Servo hebenL;
Servo schrankeL;
Servo schrankeR;
int La;
int Li;                     //Lightsensors
int Mi;
int Ri;
int Ra;
int R = 0;
int grenzLa = 300;         //set sensortresholds
int grenzLi = 350;         //set sensortresholds
int grenzMi = 320;
int grenzRi = 350;
int grenzRa = 350;  
int irVal;
bool grn = false;

void setup() {
  
    Setup();

}

void loop() {
  
    Line();         
    //green();

}
