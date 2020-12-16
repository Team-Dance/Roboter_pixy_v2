/*
 * 
 * Author: Fabian Klotz, Valentin , Michael Koscheck
 * last date: 16.11.2020
 * this is the latest code for our rescue line roboter
 * 
 */
#include "motorsteuerung.h"
#include "tcs230.h"
#include <Pixy2.h>        //Librarys
#include <Servo.h>
#include <Adafruit_NeoPixel.h>
#define PIN        2
Adafruit_NeoPixel pixels(13, PIN, NEO_GRB + NEO_KHZ800);
 
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
int z=0;
int e = 0;
int R = 0;
int grenzLa = 340;         //set LDR sensortresholds
int grenzLi = 360;         
int grenzMi = 320;
int grenzRi = 360;
int grenzRa = 360;  
int irVal = 0;
int irVal2 = 0;


void setup() {
  
    Setup();
    
}

void loop() {

    Line();  
           
}
