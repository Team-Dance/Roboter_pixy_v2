
void Senken()
{
    for(int i=85; i>=0; i--){    
      hebenR.write(i);
      hebenL.write(180-i);
      delay(5);
      }
  delay(2000);
}
