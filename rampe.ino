void rampe()
{
 if(digitalRead(28)==0)
  {
    R=0;
  }
  
if(digitalRead(28)==1)
 {
  R++;
  if(R>=60)
  {

    while(digitalRead(28)==1)
    {
 if(Mi<grenzMi)
 {Rampe();}
  if((La>grenzLa && Li<grenzLi && Mi>grenzMi && Ri>grenzRi && Ra>grenzRa) || (La>grenzLa && Li<grenzLi && Mi<grenzMi && Ri>grenzRi && Ra>grenzRa))          //wenn der seonsor li/li+mi auf schwarz ist
  {

   
      auslesen();
      RampedreheLinks();
    
  }
auslesen();
  if((La>grenzLa && Li>grenzLi && Mi>grenzMi && Ri<grenzRi && Ra>grenzRa) || (La>grenzLa && Li>grenzLi && Mi<grenzMi && Ri<grenzRi && Ra>grenzRa))        //wenn der sensor ri/ri+mi schwarz ist
  {
   
 
      auslesen();
      RampedreheRechts();
    
  }

auslesen();
  Serial.println("Rampe");
    }
    R=0;

    
  }
 }
}
