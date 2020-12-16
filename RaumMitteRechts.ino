void RaumMitteRechts() {
  while (true) {
    dreheStarkLinks();
    delay(1050);
    Stop();
    Senken2();
    Stop();
    delay(500);
    unsigned long  Time = millis();
    while (millis() - Time < 1100) {
      back();
      if (digitalRead(38) == 0 &&  digitalRead(39) == 0) {
        if (analogRead(A15) > 830) {
          z = -3;
          gerade();
          delay(400);
          dreheStarkLinks();
          delay(1250);
          gerade();
          delay(1000);
          raumRechts();
          delay(200);
        } else {
          z = -2;
          RechtsBack();
          delay(2300);
        }
        Stop();
        if (analogRead(A15) < 830) {
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
          raumRechts();
          delay(100);
        }
      }
    }
    Stop();
    delay(400);
    heben2();
    delay(500);
    dreheStarkLinks();
    delay(850);
    gerade();
    delay(1800);
    Stop();
    Senken2();
    while (digitalRead(38) == 1 &&  digitalRead(39) == 1 ) {
      RaumGerade();
    }
    Stop();
    if (e < 3) {
      nachGerade();
    } else {
      gerade();
      delay(250);
      Stop();
      delay(200);
      heben2();
      Stop();
      delay(500);
      back();
      delay(50);
    }

    dreheStarkRechts();
    delay(900);
    Stop();
    Senken2();
    Stop();
    delay(500);
    Time = millis();
    while (millis() - Time < 1100) {
      back();
      if (digitalRead(38) == 0 &&  digitalRead(39) == 0) {
        if (analogRead(A15) > 830) {
          z = -2;
          gerade();
          delay(400);
          dreheStarkRechts();
          delay(2500);
          gerade();
          delay(1000);
          raumRechts();
          delay(200);
        } else {
          z = -3;
          LinksBack();
          delay(2300);
        }
        Stop();
        if (analogRead(A15) < 830) {
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
          raumRechts();
          delay(100);
        }
      }
    }
    Stop();
    delay(400);
    heben2();
    delay(300);
    dreheStarkRechts();
    delay(800);
    if (e < 3) {
      gerade();
      delay(2500);
      e - 4;
    } else {
      gerade();
      delay(1800);
    }
    Stop();
    Senken2();
    Stop();
    delay(400);

    while (digitalRead(38) == 1 &&  digitalRead(39) == 1) {
      RaumGerade();
    }
    Stop();
    nachGerade1();
  }
}

void nachGerade1() {
  gerade();
  delay(500);
  Stop();
  delay(200);
  heben2();
  Stop();
  delay(500);
  back();
  delay(900);

  if (analogRead(A15) > 830) {}  //hm
  else {
    z = -3;
    LinksBack();
    delay(2300);
  }
  Stop();
  if (analogRead(A15) < 830) {
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
    raumRechts();
    delay(100);
  }
  gerade();
  delay(750);
}

void nachGerade() {
  gerade();
  delay(500);
  Stop();
  delay(200);
  heben2();
  Stop();
  delay(500);
  back();
  delay(900);

  if (analogRead(A15) > 830) {}  //hm
  else {
    z = -2;
    RechtsBack();
    delay(2300);
  }
  Stop();
  if (analogRead(A15) < 830) {
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
    raumRechts();
    delay(100);
  }
  gerade();
  delay(750);
}
