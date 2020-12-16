void Setup()
{
   // initialing sensor for silver detection
      pinMode(SENSOR_S0, OUTPUT);
      pinMode(SENSOR_S1, OUTPUT);
      pinMode(SENSOR_S2, OUTPUT);
      pinMode(SENSOR_S3, OUTPUT);
      pinMode(SENSOR_OUT, INPUT);
   //Setting frequency-scaling to 20%
      digitalWrite(SENSOR_S0, HIGH);
      digitalWrite(SENSOR_S1, LOW);     
   //define motor pins as outputPins        
      pinMode(linksV, OUTPUT); 
      pinMode(linksR, OUTPUT);
      pinMode(rechtsV, OUTPUT);
      pinMode(rechtsR, OUTPUT);
   //define LDR pins as input                           
      pinMode(A0, INPUT);           
      pinMode(A1, INPUT);
      pinMode(A2, INPUT);
      pinMode(A3, INPUT);
      pinMode(A4, INPUT);
      pinMode(A15, INPUT);//LDR hinten
   //define all switch as input pullup
      pinMode(38, INPUT_PULLUP);//switch right
      pinMode(39, INPUT_PULLUP);//switch left
      pinMode(28, INPUT_PULLUP);//gyro switch
   //define the two IRsensors as input
      pinMode(A5, INPUT);
      pinMode(A13, INPUT);
   //initialing neopixel
      pixels.begin();
      setPixelBlue();
   //initialing Serial communication
      Serial.begin(115200);
      Serial.print("Starting...\n");
   //initialize the pixy object 
      pixy.init();
      // using the color connected components program
      pixy.changeProg("color_connected_components");
      pixy.setLamp(1, 1);         //activate the led´s
      delay(10);           

}

void setPixelBlue()
{
  pixels.clear();
  pixels.setBrightness(255);
  pixels.setPixelColor(0, pixels.Color(0, 0, 250));
  pixels.setPixelColor(1, pixels.Color(0, 0, 250));
  pixels.setPixelColor(2, pixels.Color(0, 0, 250));
  pixels.setPixelColor(3, pixels.Color(0, 0, 250));
  pixels.setPixelColor(4, pixels.Color(0, 0, 250));
  pixels.setPixelColor(5, pixels.Color(0, 0, 250));
    pixels.show();
}
