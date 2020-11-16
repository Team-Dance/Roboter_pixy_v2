
void Senken()
{
    for(int i=90; i>=0; i--){    
      hebenR.write(i);
      hebenL.write(180-i);
      delay(5);
      }
  delay(500);
}


void Senken2()
{
    for(int i=120; i>=0; i--){    
      hebenR.write(i);
      hebenL.write(180-i);
      delay(5);
      }
  delay(500);
}
