void Line()
{
  Linieanfang:
   auslesen();
   rampe();
  // grn = false;
  if(irVal>400)
  {
    umfahren();
  }
  if(La>grenzLa && Li>grenzLi  && Mi>grenzMi && Ri>grenzRi && Ra>grenzRa)
{  
unsigned long  Nowtime = millis();

  auslesen();
  while((La>grenzLa && Li>grenzLi  && Mi>grenzMi && Ri>grenzRi && Ra>grenzRa))      
  {
    Serial.println(Nowtime);
    auslesen();
    gerade();
    tcs();
   if( (f1+f2+f3 < 4500) &&  Ra>grenzRa&&Ri>grenzRi&&Mi>grenzMi&&Li>grenzLi&&La>grenzLa)
{
  
  Raum();
}
    if(millis() - Nowtime >= 1500)
    {
    
      while(La>grenzLa && Li>grenzLi  && Mi>grenzMi && Ri>grenzRi && Ra>grenzRa)
      {
        auslesen();
      back();
      Serial.println("back");
      delay(100);
      
      }
      
    }
  }
}
  auslesen();
   if((La>grenzLa && Li>grenzLi && Mi<grenzMi && Ri>grenzRi && Ra>grenzRa)  || (La>grenzLa && Li<grenzLi && Mi<grenzMi && Ri<grenzRi && Ra>grenzRa) ) //alle bedingungen für gerade gerade aus
  {
      gerade();
   }
   auslesen();
if((La>grenzLa && Li<grenzLi && Mi>grenzMi && Ri>grenzRi && Ra>grenzRa) || (La>grenzLa && Li<grenzLi && Mi<grenzMi && Ri>grenzRi && Ra>grenzRa))          //wenn der seonsor li/li+mi auf schwarz ist
  {

   
      auslesen();
      dreheLinks();
    
  }
auslesen();
  if((La>grenzLa && Li>grenzLi && Mi>grenzMi && Ri<grenzRi && Ra>grenzRa) || (La>grenzLa && Li>grenzLi && Mi<grenzMi && Ri<grenzRi && Ra>grenzRa))        //wenn der sensor ri/ri+mi schwarz ist
  {
   
 
      auslesen();
      dreheRechts();
    
  }

auslesen();
 if((La<grenzLa && Li>grenzLi && Mi>grenzMi && Ri>grenzRi && Ra>grenzRa) || (La<grenzLa && Li<grenzLi && Mi>grenzMi && Ri>grenzRi && Ra>grenzRa))          //wenn der seonsor la/la+li auf schwarz ist
 {

      auslesen();
      dreheStarkLinks();
    
  }
auslesen();
  if((La>grenzLa && Li>grenzLi && Mi>grenzMi && Ri>grenzRi && Ra<grenzRa) || (La>grenzLa && Li>grenzLi && Mi>grenzMi && Ri<grenzRi && Ra<grenzRa))        //wenn der sensor ra/ra+ri schwarz ist
  {
    

      auslesen();
      dreheStarkRechts();
    
  }
  auslesen();

  if(La<grenzLa && Li<grenzLi && Mi<grenzMi && Ri>grenzRi && Ra>grenzRa) 
  {
    /*green();
    if(grn == true)
    {Stop();
    delay(1000);
     return;}
     else{*/
    gerade();
    delay(200);
    dreheStarkLinks();
    delay(150);
    auslesen();
    while(Mi>grenzMi)
    {
      auslesen();
      dreheStarkLinks();
    }
   back();
   delay(30);
  }//}
  auslesen();
    if(La>grenzLa && Li>grenzLi && Mi<grenzMi && Ri<grenzRi && Ra<grenzRa) 
  {
   /* green();
        if(grn == true)
    {Stop();
    delay(1000);
     return;}
      else{*/
    gerade();
    delay(200);
    dreheStarkRechts();
    delay(150);
    auslesen();
    while(Mi>grenzMi)
    {
      auslesen();
      dreheStarkRechts();
    }
    back();
    delay(30);
  }//}
  grn=false;
  auslesen();
  green();

}


void auslesen()
{
    
    Ra = analogRead(A4);
   Ri = analogRead(A3);
   Mi = analogRead(A2);
   Li = analogRead(A1);
   La= analogRead(A0);
   irVal=  analogRead(A5);
    Serial.print(La);
    Serial.print("---");
    Serial.print(Li);
    Serial.print("---");
    Serial.print(Mi);
    Serial.print("---");
    Serial.print(Ri);
    Serial.print("---");
    Serial.println(Ra);
    Serial.print("           ");
//    Serial.println(irVal);
 
    }
    
 void green()
{
   static int i = 0;
  int j;
  char buf[64]; 
  int32_t panOffset, tiltOffset;
  pixy.ccc.getBlocks();

  if (pixy.ccc.numBlocks)
  {        
    i++;
   
    panOffset = (int32_t)pixy.frameWidth/2 - (int32_t)pixy.ccc.blocks[0].m_x;
    tiltOffset = (int32_t)pixy.ccc.blocks[0].m_y - (int32_t)pixy.frameHeight/2;  
    pixy.ccc.getBlocks();
int   panOffset2 = (int32_t)pixy.frameWidth/2 - (int32_t)pixy.ccc.blocks[1].m_x;
int    tiltOffset2 = (int32_t)pixy.ccc.blocks[1].m_y - (int32_t)pixy.frameHeight/2;  
   
Serial.print(panOffset);
    Serial.print("       ");
    Serial.println(tiltOffset);
    if(panOffset<0&&tiltOffset>45)
    {
      gerade();
      delay(12);

      back();
      delay(20);
      Stop();
      delay(500);
      auslesen();
      if(Ra<grenzRa&&Ri<grenzRi)
      {
        gerade();
        delay(700);
        auslesen();
        grn = false;
        goto greenend;
       // return;
      }
      gerade();
      delay(580);
      dreheStarkRechts();
      delay(800);
      auslesen();
     while(Mi>grenzMi && Li>grenzLi && La>grenzLa)
        {
                auslesen();
                dreheStarkRechts();
        }
        gerade();
        delay(250);
        grn = true;
        return;
    }
     if(panOffset>0&&tiltOffset>45)
    {
    
      gerade();
      delay(12);
      back();
      delay(20);
      Stop();
      delay(500);
      
      
      auslesen();
      if(La<grenzLa)
      {
        gerade();
        delay(700);
        auslesen();
        grn = false;
       //return;
       goto greenend;
      }
      gerade();
      delay(580);
      dreheStarkLinks();
      delay(800);
      auslesen();
      while(Mi>grenzMi&& Ri>grenzRi && Ra>grenzRa)
        {
                auslesen();
                dreheStarkLinks();
        }
        gerade();
        delay(250);
        grn= true;
      return;
      
    }
    if(pixy.ccc.numBlocks==2)
    {
        if(tiltOffset>0&&tiltOffset2>0)
{
       turn();
      delay(800);
      auslesen();
      while(Mi>grenzMi)
      {
        dreheStarkRechts();
        auslesen();
      } 
}
else
{
  return;
}
}
return;
}
greenend:
delay(1);
}
