void raumRechts()
{
  int i = 0;
  int p = 0;

  while (true)
  {

Raumanfang:
    z++;

    tcs();
    while ((digitalRead(38) == 1 &&  digitalRead(39) == 1) )
    {
      p++;
      if (p < 25) {
        RaumGerade();
      } else {
        RaumGeradeRechts();
      }
      tcs();
      if (f1 + f2 + f3 < 4500)
      {
        Stop();
        gerade();
        delay(400);
        goto Ausgang;
      }
      tcs();
    }

    gerade();
    delay(800);
    Stop();
    delay(250);
    heben();
    delay(200);
    Senken();
    while (digitalRead(38) == 1 && digitalRead(39) == 1)
    {
      back();
    }
    back();
    delay(150);
    gerade();
    delay(270);
    Stop();
    delay(250);
    heben2();
    back();
    delay(950);

    Serial.println(analogRead(A15));
    if (analogRead(A15) > 850) {}
    else {
      RechtsBack();
      delay(2300);
    }
    Stop();
    if (analogRead(A15) < 850)
    {
      Stop();
      delay(200);
      gerade();
      delay(200);
      back();
      delay(200);
      Stop();
      delay(10);
      EckeRechts();
      delay(100);
      goto Raumanfang;

    }
Ausgang:
    if (z > 3) {
      RaumMitteRechts();
    }
    dreheStarkLinks();
    delay(1250);
    gerade();
    delay(1000);
    Stop();
    Senken2();
    delay(300);
    drehe90Rechts();
    delay(150);

  }
}

void EckeRechts()
{
  e = z;
  int j = 90;
  for (int i = 90; i <= 180; i++) {
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
  gerade();
  delay(50);
  drehe90Links();
  delay(900);
  Stop();
  delay(1);
  Senken();
  delay(200);
  while (digitalRead(38) == 1 &&  digitalRead(39) == 1) {
    back();
  }
  gerade();
  delay(200);
  Stop();
  delay(1);
  heben();
  delay(50);
  back();
  delay(600);
  drehe90Links();
  delay(400);
  Stop();
  Senken();
  drehe90Rechts();
  delay(80);



}
