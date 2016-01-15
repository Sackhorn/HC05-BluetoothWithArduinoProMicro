//Writen for pro micro
//These proved to be usefull 
//http://arduino.stackexchange.com/questions/1471/arduino-pro-micro-get-data-out-of-tx-pin
//https://forum.sparkfun.com/viewtopic.php?f=32&t=38889&sid=8178cdb38005ff33cc380a5da34fb583&start=15

void setup()
{
  pinMode(9, OUTPUT);  
  digitalWrite(9, HIGH); 
  Serial.begin(9600);
  Serial1.begin(38400);
  Serial.println("AT commandes:");
}

void loop()
{
  
  //Serial1 is the physical Serial Connections on TX and RX pins
  if (Serial1.available()) Serial.write(Serial1.read());

  // Serial is from my understanding the virtual connection with computer via USB 
  if (Serial.available()) Serial1.write(Serial.read());
}
