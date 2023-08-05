#include <Encoder.h>	// Encoder library

Encoder encoder(7,8);

long position = 0;
int rotation = 0;	

void setup()
{
  Serial.begin(9600);
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
}


void loop()
{
  //spin motor
  analogWrite(10, 30);
  analogWrite(11,0);
  
  position = encoder.read() / 10;
  
  rotation = abs(position) / 10;
  
  Serial.print("position:");
  Serial.println(position);
  Serial.print("rotation:");
  Serial.println(rotation);
}