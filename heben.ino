void heben()
{
for(int i=0; i<47; i++){    
      hebenR.write(i+2);
      hebenL.write(180-i);
      delay(5);
      }
      delay(300);
  schrankeL.write(0);
  schrankeR.write(180);
  delay(300);
  for(int i=49; i<90; i++){    
      hebenR.write(i+2);
      hebenL.write(180-i);
      delay(5);
      }

      delay(100);
  schrankeL.write(180);
  schrankeR.write(10);
  


    

}
