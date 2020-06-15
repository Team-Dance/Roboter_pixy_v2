void heben()
{
for(int i=0; i<45; i++){    
      hebenR.write(i+2);
      hebenL.write(180-i);
      delay(5);
      }
      delay(300);
  schrankeL.write(0);
  schrankeR.write(180);
  delay(300);
  for(int i=45; i<85; i++){    
      hebenR.write(i+2);
      hebenL.write(180-i);
      delay(5);
      }

      delay(100);
  schrankeL.write(180);
  schrankeR.write(10);
  


    

}
