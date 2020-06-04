void Raum()
{
    pixy.setLamp(0, 0);         //activate the led´s
    Stop();
    delay(300);
Servo1.attach(A6);
Servo2.attach(A7);
Servo3.attach(A8);
Servo4.attach(A9);
    Servo1.write(0);
    Servo2.write(180);
    delay(500);
    Servo3.write(180);
    Servo4.write(0);
    delay(1000);
    gerade();
    delay(2000);
    Stop();
    delay(2000);
    void catchBalls()
    {
    for(int i=0; i<45; i++)
    {
      
      Servo1.write(i);
      Servo2.write(180-i+2);
     
      delay(15);
      
      }
    Servo3.write(20);
    Servo4.write(160);
    delay(10);
    for(int i=45; i<75; i++)
    {
      Servo1.write(i);
      Servo2.write(180-i);
      delay(15);
      }  
    Servo3.write(180);
    Servo4.write(0);
    }
    while(true)
    {
      
    }
    
}
