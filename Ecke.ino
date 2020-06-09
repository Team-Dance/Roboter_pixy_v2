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
  
}
