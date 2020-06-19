
//#include "tcs230.h"
void Raum()
{
  pixels.clear();
  pixels.show();
    pixy.setLamp(0, 0);         //activate the led´s
    Stop();
    delay(300);

attaches();
  schrankeL.write(180);
  schrankeR.write(10);

    delay(500);
    gerade();
    delay(150);
    dreheStarkLinks();
    delay(900);
    Stop();
    delay(200);
  gerade();
  delay(800);
  Stop();
  delay(1);
    Senken();
    delay(200);
    drehe90Rechts();
    delay(100);            
    int z = 0;
    while(true)
    {
      
      Raumanfang:
      z++;
      tcs();
      while(digitalRead(38) ==0 &&  digitalRead(39) == 0 && f1+f2+f3 > 4500)
      {
        tcs();
      RaumBack();
      if(z < 3)
      {
          unsigned long timer = millis();
        while(digitalRead(38) ==0 &&  digitalRead(39) == 0 && f1+f2+f3 > 4500)
      {
        RaumBack();
        tcs();
          if(millis() - timer <=2500 && digitalRead(39)==1)
          {
            gerade();
            delay(200);
            drehe90Links();
            delay(300);
            back();
            delay(350);
            drehe90Rechts();
            delay(320);
            
          }
      }
      }
      
     
      }
      if(f1+f2+f3 < 4500)
      {
        gerade();
        delay(500);
        ausgangDrehen();
        goto Raumanfang;
      }
      gerade();
      delay(300);
      Stop();
      delay(250);
      heben();
      delay(200);
      back();
      delay(950);
      Serial.println(analogRead(A15));
      if(analogRead(A15)>850)
      {
        
      }
      else{
      RechtsBack();
      delay(2300);
      
      }
      Stop();
      if(analogRead(A15)<850)
      {
        Stop();
        delay(200);
        gerade();
        delay(200);
        back();
        delay(200);
        Stop();
        delay(10);
        Ecke();
        z=0;
        delay(100);
        goto Raumanfang;
        
      }

      gerade();
      delay(300);
      drehe90Links();
      delay(2050);
      gerade();
      delay(580);
      Stop();
      delay(20);
      drehe90Rechts();
      delay(1000);
      Stop();
      Senken();
      delay(300);
      drehe90Rechts();
      delay(160);
      
    }


   
    
}
    void attaches()
    {
hebenR.attach(A6);
hebenL.attach(A7);
schrankeL.attach(A8);
schrankeR.attach(A9);
    }
     void detaches()
    {
hebenR.detach();
hebenL.detach();
schrankeL.detach();
schrankeR.detach();
    }
    void Ecke()
{
  int j= 90;
  for(int i=90; i<=180; i++){    
    j--;
      hebenR.write(i);
      hebenL.write(j);
      delay(8);
      }
      delay(500);
       schrankeL.write(20);
  schrankeR.write(170);
  delay(1500);
  gerade();
  delay(250);
  back();
  delay(270);
  Stop();
  delay(500);
  schrankeL.write(170);
  schrankeR.write(20);
  gerade();
  delay(50);
  drehe90Links();
  delay(1000);
  Stop();
  delay(1);
  Senken();
  delay(200);
  while(digitalRead(38) ==0 &&  digitalRead(39) == 0){
  back();
  }
  gerade();
  delay(150);
  Stop();
  delay(1);
  heben();
  delay(50);
  back();
  delay(600);
  drehe90Links();
  delay(430);
  Stop();
  Senken();
  dreheStarkRechts();
  delay(250);
  
  
}
void ausgangDrehen()
{

    drehe90Links();
      delay(2050);
      gerade();
      delay(580);
      Stop();
      delay(20);
      drehe90Rechts();
      delay(1000);
      Stop();
     // Senken();
      delay(300);
      drehe90Rechts();
      delay(160);
  
}
