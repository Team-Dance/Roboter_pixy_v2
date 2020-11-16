#ifndef __MOTORSTEUERUNG_H__
#define __MOTORSTEUERUNG_H__
int linksV = 3;
int linksR = 4;
int rechtsV = 5;
int rechtsR = 6;
int v1=143;
int v2=110;

//************Linienbefehle************Linienbefehle************Linienbefehle************Linienbefehle************
void gerade(){                   //geradeaus
  analogWrite(rechtsV, v1+20);    //v1+15
  analogWrite(rechtsR, 0);
  analogWrite(linksV, v1);
  analogWrite(linksR, 0);
  Serial.println("Gerade");
  delay(1);
}

void dreheRechts(){              //leichtes Korrigieren rechts
  analogWrite(rechtsV, 0);
  analogWrite(rechtsR, v2+22);
  analogWrite(linksV, v1+5);
  analogWrite(linksR, 0);
  Serial.println("Rechts");
  delay(2);
}

void dreheStarkRechts(){         //starkes Korrigieren rechts
  analogWrite(rechtsV, 0);
  analogWrite(rechtsR, v1+22);
  analogWrite(linksV, v1+5);
  analogWrite(linksR, 0);
  Serial.println("Stark Rechts");
  delay(2);
}

void drehe90Rechts(){            //90 Grad Kurve rechts
  analogWrite(rechtsV, 0);
  analogWrite(rechtsR, v1+22);
  analogWrite(linksV, v2);
  analogWrite(linksR, 0);
  delay(10);
}

void umfahrenRechts(){           //umfahren rechts
  analogWrite(rechtsV, 80);
  analogWrite(rechtsR, 0);
  analogWrite(linksV, 200);
  analogWrite(linksR, 0);
  delay(10);
}

void dreheLinks(){               //leichtes Korrigieren links
  analogWrite(rechtsV, v1+35);
  analogWrite(rechtsR, 0);
  analogWrite(linksV, 0);
  analogWrite(linksR, v2+15);
  Serial.println("Links");
  delay(2);
}

void dreheStarkLinks(){          //starkes Korrigieren links
  analogWrite(rechtsV, v1+5);      //45
  analogWrite(rechtsR, 0);
  analogWrite(linksV, 0);
  analogWrite(linksR, v1+22);       //20
  Serial.println("Stark Links");
  delay(2);
}

void drehe90Links(){             //90 Grad Kurve links
  analogWrite(rechtsV, v1+45);
  analogWrite(rechtsR, 0);
  analogWrite(linksV, 0);
  analogWrite(linksR, v1+20);
  delay(10);
}

void turn(){                     //umdrehen
  analogWrite(rechtsV, 0);
  analogWrite(rechtsR, v1);
  analogWrite(linksV, v2);
  analogWrite(linksR, 0);
  delay(10);
}

void back(){                     //zurück
  analogWrite(rechtsV, 0);
  analogWrite(rechtsR, v1);
  analogWrite(linksV, 0);
  analogWrite(linksR, v1+15);
  Serial.println("Zurück");
  delay(1);
}

void Stop(){                     //Stop
  analogWrite(rechtsV, 0);
  analogWrite(rechtsR, 0);
  analogWrite(linksV, 0);
  analogWrite(linksR, 0);
  Serial.println("Stop");
  delay(20);
}



//************Rampenbefehle************Rampenbefehle************Rampenbefehle************Rampenbefehle************
void RampeGerade(){              //geradeaus auf Rampe (schneller)
  analogWrite(rechtsV, 255);
  analogWrite(rechtsR, 0);
  analogWrite(linksV, 255);
  analogWrite(linksR, 0);
  Serial.println("Gerade");
  delay(1);
}

void RampedreheRechts(){         //leichtes Korrigieren rechts auf Rampe (geringer)
  analogWrite(rechtsV, 0);
  analogWrite(rechtsR, 100);
  analogWrite(linksV, 255);
  analogWrite(linksR, 0);
  Serial.println("Rechts");
  delay(2);
}

void RampedreheLinks(){          //leichtes Korrigieren links auf Rampe (geringer)
  analogWrite(rechtsV, 255);
  analogWrite(rechtsR, 0);
  analogWrite(linksV, 0);
  analogWrite(linksR, 100);
  Serial.println("Links");
  delay(2);
}



//************Raumbefehle**************Raumbefehle**************Raumbefehle**************Raumbefehle**************

void RaumGerade(){               //schnell gerade im Raum
  analogWrite(rechtsV, 0);
  analogWrite(rechtsR, 240+10);
  analogWrite(linksV, 0);
  analogWrite(linksR, 240);
  Serial.println("Zurück");
  delay(1);
}

void RaumGeradeRechts(){         //schnell gerade mit Rechtsdrall im Raum
  analogWrite(rechtsV, 0);
  analogWrite(rechtsR, 255);
  analogWrite(linksV, 0);
  analogWrite(linksR, 230);
  delay(2);
}

void RaumRechts(){               //Rechtsdrehen im Raum
  analogWrite(rechtsV, 0);
  analogWrite(rechtsR, v1);
  analogWrite(linksV, v2);
  analogWrite(linksR, 0);
  delay(2);
}

void RechtsBack(){               //nur rechts rückwärts
  analogWrite(rechtsV, 0);
  analogWrite(rechtsR, 250);
  analogWrite(linksV, 0);
  analogWrite(linksR, 0);
  Serial.println("Gerade");
  delay(1);
}

void RaumGeradeLinks(){          //schnell gerade mit Linksdrall im Raum
  analogWrite(rechtsV, 0);
  analogWrite(rechtsR, 240-10);
  analogWrite(linksV, 0);
  analogWrite(linksR, 240+15);
  Serial.println("Zurück");
  delay(1);
}

void RaumLinks(){                //linksdrehen im Raum
  analogWrite(rechtsV, v2);
  analogWrite(rechtsR, 0);
  analogWrite(linksV, 0);
  analogWrite(linksR, v1);
  delay(2);
}

void LinksBack(){                //nur links rückwärts
  analogWrite(rechtsV, 0);
  analogWrite(rechtsR, 0);
  analogWrite(linksV, 0);
  analogWrite(linksR, 250);
  Serial.println("Gerade");
  delay(1);
}



#endif
