void raumLinks()
{
            
     int z = 0;
     int i = 0;
     int p = 0;

    while(true)
    {
      
      Raumanfang:
      z++;
      tcs();
      while((digitalRead(38) ==1 &&  digitalRead(39) == 1) )
      {
      p++;
      if(p<1500){
           RaumBack1();
        }else{
            gerade;
        }  
      tcs();
      if(f1+f2+f3 < 4500)
      {
        Stop();
        gerade();
        delay(400);
        goto Ausgang;
      }
      if(z >=3)
      {
          unsigned long timer = millis();
          tcs();
        /*while((digitalRead(38) ==1 &&  digitalRead(39) == 1))
      {
          if(p<1500){
           RaumBack1();
         }else{
            gerade;
          } 
          tcs();
          if(f1+f2+f3 < 4500)
      {
        Stop();
        gerade();
        delay(400);
        goto Ausgang;
      }
          if(millis() - timer <=2500 && digitalRead(39)==0)
          {
            gerade();
            delay(200);
            drehe90Rechts();
            delay(350);
            back();
            delay(350);
            drehe90Links();
            delay(370);
            tcs();
            
          }
      }*/
      }
      
     tcs();
      }
     
      gerade();
      delay(800);
      Stop();
      delay(250);
      heben();
      delay(200);
      Senken();
      while(digitalRead(38)==1&& digitalRead(39)==1)
      {
      back();
      }
      back();
      delay(150);
      gerade();
      delay(270);
      Stop();
      delay(250);
      heben2();
      back();
      delay(950);
       
      Serial.println(analogRead(A15));
      if(analogRead(A15)>850)
      {
        
      }
      else{
      LinksBack();
      delay(2800);
      
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
        EckeLinks();
        delay(100);
        goto Raumanfang;
        
      }
 Ausgang:
     dreheStarkRechts();
      delay(1300);
      gerade();
      delay(1000);
      Stop();
      Senken2();
      delay(300);
      drehe90Links();
      delay(150);
      
    }


   
    
}

    void EckeLinks()
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
  drehe90Rechts();
  delay(1350);      //1350
  Stop();
  delay(1);
  Senken();
  delay(200);
while(digitalRead(38) ==1 &&  digitalRead(39) == 1){
  back();
  }
  gerade();
  delay(200);
  Stop();
  delay(1);
  heben();
  delay(50);
  back();
  delay(600);
  drehe90Rechts();
  delay(400);
  Stop();
  Senken();
  drehe90Links();
  delay(80);
  
  
  
}
