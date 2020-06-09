void Raum()
{
  pixels.clear();
  pixels.show();
    pixy.setLamp(0, 0);         //activate the led´s
    Stop();
    delay(300);

attaches();

    delay(500);
    gerade();
    delay(300);
    dreheStarkLinks();
    delay(850);
    Stop();
    delay(200);

    Senken();
    delay(200);
    drehe90Rechts();
    delay(100);            
    
    while(true)
    {
      while(digitalRead(38) ==0 &&  digitalRead(39) == 0)
      {
      back();
     
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
        delay(100);
        
      }

      gerade();
      delay(300);
      drehe90Links();
      delay(2300);
      gerade();
      delay(500);
      Stop();
      delay(20);
      drehe90Rechts();
      delay(870);
      Stop();
      Senken();
      delay(300);
      drehe90Rechts();
      delay(40);
      
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
