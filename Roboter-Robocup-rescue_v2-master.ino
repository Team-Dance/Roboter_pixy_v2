#include "motorsteuerung.h"
#include "neopixels.h"
#include "tcs230.h"
#include <Pixy2.h>        //Librarys
#include <Servo.h>

 
Pixy2 pixy;  //pixy-object

Servo Servo1;
Servo Servo2;
Servo Servo3;
Servo Servo4;
int La;
int Li;                     //Lightsensors
int Mi;
int Ri;
int Ra;
int R = 0;
int grenzLa = 330;         //set sensortresholds
int grenzLi = 330;         //set sensortresholds
int grenzMi = 320;
int grenzRi = 330;
int grenzRa = 330;  
int irVal;

void setup() {
  
    Setup();

}

void loop() {
  
    Line();         
    green();

}
