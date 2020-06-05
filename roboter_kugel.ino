#include <Servo.h>
Servo schrankeL;
Servo schrankeR;
Servo hebenL;
Servo hebenR;

void setup() {
hebenR.attach(A6);
hebenL.attach(A7);
schrankeL.attach(A8);
schrankeR.attach(A9);

schrankeL.write(180);
schrankeR.write(10);
hebenL.write(180);
hebenR.write(0);
}

void loop() {

  
  for(int i=0; i<120; i++){    
      hebenR.write(i+2);
      hebenL.write(180-i);
      delay(15);
      }
      schrankeL.write(20);
      schrankeR.write(170);
      delay(2000);
      schrankeL.write(180);
      schrankeR.write(10);
      for(int i=120; i>=0; i--){    
      hebenR.write(i+2);
      hebenL.write(180-i);
      delay(15);
      }
      
  
  for(int a=0; a<5; a++){
  for(int i=0; i<50; i++){    
      hebenR.write(i+2);
      hebenL.write(180-i);
      delay(15);
      }
  schrankeL.write(20);
  schrankeR.write(170);
  for(int i=49; i<90; i++){    
      hebenR.write(i+2);
      hebenL.write(180-i);
      delay(15);
      }

      delay(20);
  schrankeL.write(180);
  schrankeR.write(10);
  


    
  for(int i=90; i>=0; i--){    
      hebenR.write(i);
      hebenL.write(180-i);
      delay(15);
      }
  delay(2000);
  }

}
