void Line()
{
Linieanfang:
  auslesen();
  rampe();
  if (irVal > 400)
  {
    umfahren();
  }
  auslesen();
  if (La > grenzLa && Li > grenzLi  && Mi > grenzMi && Ri > grenzRi && Ra > grenzRa)                                                                  // wenn alle weiß sind
  {
    unsigned long  Nowtime = millis();
    auslesen();
    while ((La > grenzLa && Li > grenzLi  && Mi > grenzMi && Ri > grenzRi && Ra > grenzRa))
    {
      Serial.println(Nowtime);
      auslesen();
      gerade();
      tcs();
      if ( (f1 + f2 + f3 < 4500) &&  Ra > grenzRa && Ri > grenzRi && Mi > grenzMi && Li > grenzLi && La > grenzLa)
      {
        Raum();
      }
      if (millis() - Nowtime >= 1500)
      {

        while (La > grenzLa && Li > grenzLi  && Mi > grenzMi && Ri > grenzRi && Ra > grenzRa)
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
  if ((La > grenzLa && Li > grenzLi && Mi < grenzMi && Ri > grenzRi && Ra > grenzRa)  || (La > grenzLa && Li < grenzLi && Mi < grenzMi && Ri < grenzRi && Ra > grenzRa) ) //alle bedingungen für gerade gerade aus
  {
    gerade();
  }
  auslesen();
  if ((La > grenzLa && Li < grenzLi && Mi > grenzMi && Ri > grenzRi && Ra > grenzRa) || (La > grenzLa && Li < grenzLi && Mi < grenzMi && Ri > grenzRi && Ra > grenzRa)) //wenn der sensor li/li+mi auf schwarz ist
  {

    while (Mi > grenzMi)
    {
      auslesen();
      dreheLinks();
    }

  }
  auslesen();
  if ((La > grenzLa && Li > grenzLi && Mi > grenzMi && Ri < grenzRi && Ra > grenzRa) || (La > grenzLa && Li > grenzLi && Mi < grenzMi && Ri < grenzRi && Ra > grenzRa)) //wenn der sensor ri/ri+mi schwarz ist
  {

    while (Mi > grenzMi)
    {
      auslesen();
      dreheRechts();
    }

  }
  auslesen();
  if ((La < grenzLa && Li > grenzLi && Mi > grenzMi && Ri > grenzRi && Ra > grenzRa) || (La < grenzLa && Li < grenzLi && Mi > grenzMi && Ri > grenzRi && Ra > grenzRa)) //wenn der sensor la/la+li auf schwarz ist
  {

    while (Mi > grenzMi)
    {
      auslesen();
      dreheStarkLinks();
    }

  }
  auslesen();
  if ((La > grenzLa && Li > grenzLi && Mi > grenzMi && Ri > grenzRi && Ra < grenzRa) || (La > grenzLa && Li > grenzLi && Mi > grenzMi && Ri < grenzRi && Ra < grenzRa)) //wenn der sensor ra/ra+ri schwarz ist
  {

    while (Mi > grenzMi)
    {
      auslesen();
      dreheStarkRechts();
    }

  }
  auslesen();
  if (La < grenzLa && Li < grenzLi && Mi < grenzMi && Ri > grenzRi && Ra > grenzRa)
  {
    gerade();
    delay(180);
    dreheStarkLinks();
    delay(150);
    auslesen();
    while (Mi > grenzMi)
    {
      auslesen();
      dreheStarkLinks();
    }
  }
  auslesen();
  if (La > grenzLa && Li > grenzLi && Mi < grenzMi && Ri < grenzRi && Ra < grenzRa)
  {
    gerade();
    delay(180);
    dreheStarkRechts();
    delay(150);
    auslesen();
    while (Mi > grenzMi)
    {
      auslesen();
      dreheStarkRechts();
    }
  }
  auslesen();
  green();
}


void auslesen()
{
  Ra = analogRead(A4);
  Ri = analogRead(A3);
  Mi = analogRead(A2);
  Li = analogRead(A1);
  La = analogRead(A0);
  irVal =  analogRead(A5);
  irVal2 = analogRead(A13);
  /* Serial.print(La);
    Serial.print("---");
    Serial.print(Li);
    Serial.print("---");
    Serial.print(Mi);
    Serial.print("---");
    Serial.print(Ri);
    Serial.print("---");
    Serial.println(Ra);
    Serial.print("           ");*/
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

    panOffset = (int32_t)pixy.frameWidth / 2 - (int32_t)pixy.ccc.blocks[0].m_x;
    tiltOffset = (int32_t)pixy.ccc.blocks[0].m_y - (int32_t)pixy.frameHeight / 2;
    pixy.ccc.getBlocks();
    int   panOffset2 = (int32_t)pixy.frameWidth / 2 - (int32_t)pixy.ccc.blocks[1].m_x;
    int    tiltOffset2 = (int32_t)pixy.ccc.blocks[1].m_y - (int32_t)pixy.frameHeight / 2;

    Serial.print(panOffset);
    Serial.print("       ");
    Serial.println(tiltOffset);
    if (panOffset < 0 && tiltOffset > 45)
    {
      gerade();
      delay(12);

      back();
      delay(20);
      Stop();
      delay(100);
      auslesen();
      if (Ra < grenzRa && Ri < grenzRi)
      {
        gerade();
        delay(700);
        auslesen();
        goto greenend;
      }
      gerade();
      delay(580);
      dreheStarkRechts();
      delay(750);
      auslesen();
      while (Mi > grenzMi && Li > grenzLi && La > grenzLa)
      {
        auslesen();
        dreheStarkRechts();
      }
      gerade();
      delay(250);

    }
    if (panOffset > 0 && tiltOffset > 45)
    {

      gerade();
      delay(12);
      back();
      delay(20);
      Stop();
      delay(100);


      auslesen();
      if (La < grenzLa)
      {
        gerade();
        delay(700);
        auslesen();
        goto greenend;
      }
      gerade();
      delay(580);
      dreheStarkLinks();
      delay(750);
      auslesen();
      while (Mi > grenzMi && Ri > grenzRi && Ra > grenzRa)
      {
        auslesen();
        dreheStarkLinks();
      }
      gerade();
      delay(250);

    }
    if (pixy.ccc.numBlocks == 2)
    {
      if (tiltOffset > 0 && tiltOffset2 > 0)
      {
        gerade();
        delay(200);
        auslesen();
        if (Ra < grenzRa && La < grenzLa)
        {
          gerade();
          delay(800);
          return;
        }
        turn();
        delay(800);
        auslesen();
        while (Mi > grenzMi)
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
