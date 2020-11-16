
/*
 * 
 * Author: Fabian Klotz, Valentin , Michael Koscheck
 * last date: 16.06.2020
 * this is the latest code for our rescue line roboter
 * 
 */



#include "motorsteuerung.h"
#include "neopixels.h"
#include "tcs230.h"
#include <Pixy2.h>        //Librarys
#include <Servo.h>

 
Pixy2 pixy;  //pixy-object

Servo hebenR;
Servo hebenL;            // Servos
Servo schrankeL; 
Servo schrankeR;
int La;
int Li;                     //Lightsensors
int Mi;
int Ri;
int Ra;
int R = 0;
int grenzLa = 340;         //set sensortresholds
int grenzLi = 360;         
int grenzMi = 320;
int grenzRi = 360;
int grenzRa = 360;  
int irVal = 0;
int irVal2 = 0;
bool grn = false;

void setup() {
  
    Setup();

}

void loop() {
  
    Line();         

}
