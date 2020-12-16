void heben()
{
  for (int i = 0; i < 50; i++) {
    hebenR.write(i + 2);
    hebenL.write(180 - i);
    delay(5);
  }
  delay(300);
  schrankeL.write(20);
  schrankeR.write(180);
  delay(300);
  for (int i = 50; i < 90; i++) {
    hebenR.write(i + 2);
    hebenL.write(180 - i);
    delay(5);
  }
  delay(100);
  schrankeL.write(180);
  schrankeR.write(10);
}


void heben2()
{
  for (int i = 0; i < 50; i++) {
    hebenR.write(i + 2);
    hebenL.write(180 - i);
    delay(5);
  }
  delay(300);
  schrankeL.write(0);
  schrankeR.write(180);
  delay(300);
  for (int i = 50; i < 90; i++) {
    hebenR.write(i + 2);
    hebenL.write(180 - i);
    delay(5);
  }
  delay(100);
  schrankeL.write(180);
  schrankeR.write(10);
  delay(300);
  for (int i = 90; i < 120; i++) {
    hebenR.write(i + 2);
    hebenL.write(180 - i);
    delay(5);
  }



}


void Senken()
{
  for (int i = 90; i >= 0; i--) {
    hebenR.write(i);
    hebenL.write(180 - i);
    delay(5);
  }
  delay(500);
}


void Senken2()
{
  for (int i = 120; i >= 0; i--) {
    hebenR.write(i);
    hebenL.write(180 - i);
    delay(5);
  }
  delay(500);
}
