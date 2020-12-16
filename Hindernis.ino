void umfahren() {
  back();
  delay(300);
  dreheStarkLinks();
  delay(750);
  gerade();
  delay(200);
  do {
    umfahrenRechts();
    auslesen();
  } while (Mi > grenzMi);
  back();
  delay(200);
  dreheStarkLinks();
  delay(250);
  do {
    gerade();
    auslesen();
  } while (Li > grenzLi);
  auslesen();
  dreheStarkLinks();
  delay(200);
}
