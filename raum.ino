void Raum()
{

auslesen();
 pixels.clear();
  pixels.show();
    pixy.setLamp(0, 0);         //deactivate the led´s
    Stop();
    delay(300);

  attaches();
  schrankeL.write(180);
  schrankeR.write(10);
  gerade();
  delay(400);
    if(irVal2>250){ 
      drehe90Rechts();
      delay(1100);
      Senken();  
      delay(100);
      Stop(); 
     back();
     delay(300);
     drehe90Rechts();
     delay(80);
     raumRechts();}
    else{ 
      drehe90Links();
      delay(800);
      Senken();  
      delay(100);
      Stop();  
      back();
      delay(300);
      drehe90Links();
      delay(200);
      raumLinks();
    }
}

void attaches()
    {
hebenR.attach(A6);
hebenL.attach(A7);
schrankeL.attach(A8);
schrankeR.attach(A9);
// bumper.attach(A10);
    }
     void detaches()
    {
hebenR.detach();
hebenL.detach();
schrankeL.detach();
schrankeR.detach();
    }
