
#include "Arduino.h"
#include "PCF8574.h"
PCF8574 pcf8574(0x20);

const byte wkt = 100;
void setup()
{
	Serial.begin(115200);
    
	pcf8574.pinMode(P0, OUTPUT);
	pcf8574.pinMode(P1, OUTPUT);
	pcf8574.pinMode(P2, OUTPUT);
	pcf8574.pinMode(P3, OUTPUT);
	pcf8574.pinMode(P4, OUTPUT);
	pcf8574.begin();
	
}
void loop()
{
	pcf8574.digitalWrite(P0, HIGH);delay(wkt);
  pcf8574.digitalWrite(P1, HIGH);delay(wkt);
  pcf8574.digitalWrite(P2, HIGH);delay(wkt);
  pcf8574.digitalWrite(P3, HIGH);delay(wkt);
  pcf8574.digitalWrite(P4, HIGH); delay(wkt);
  pcf8574.digitalWrite(P0, LOW);delay(wkt);
  pcf8574.digitalWrite(P1, LOW);delay(wkt);
  pcf8574.digitalWrite(P2, LOW);delay(wkt);
  pcf8574.digitalWrite(P3, LOW);delay(wkt);
  pcf8574.digitalWrite(P4, LOW); delay(wkt);
 
}
