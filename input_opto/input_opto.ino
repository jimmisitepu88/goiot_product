#include "PCF8574.h"
PCF8574 pcf8574(0x20); // SCAN ADDRESS BEFORE

#define IN1 34
#define IN2 35
#define IN3 36
#define IN4 39
#define IN5 P7

String str_input;
bool dt_in1;
bool dt_in2;
bool dt_in3;
bool dt_in4;
bool dt_in5;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  pcf8574.pinMode(P0, OUTPUT);
  pcf8574.pinMode(P1, OUTPUT);
  pcf8574.pinMode(P2, OUTPUT);
  pcf8574.pinMode(P3, OUTPUT);
  pcf8574.pinMode(P4, OUTPUT);
  
  pcf8574.pinMode(IN5, INPUT_PULLUP);
  pinMode(IN1, INPUT);
  pinMode(IN2, INPUT);
  pinMode(IN3, INPUT);
  pinMode(IN4, INPUT);

  pcf8574.digitalWrite(P0, LOW);
  pcf8574.digitalWrite(P1, LOW);
  pcf8574.digitalWrite(P2, LOW);
  pcf8574.digitalWrite(P3, LOW);
  pcf8574.digitalWrite(P4, LOW);
  pcf8574.begin();
}

void loop() {
  // put your main code here, to run repeatedly:
  baca_opto();
  str_input = String(dt_in1) + dt_in2 + dt_in3 + dt_in4 + dt_in5;
  Serial.println(str_input);
  delay(1000);
}

void baca_opto(){
  dt_in1 = digitalRead(IN1);
  dt_in2 = digitalRead(IN2);
  dt_in3 = digitalRead(IN3);
  dt_in4 = digitalRead(IN4);
  dt_in4 = digitalRead(IN4);
  dt_in5 = pcf8574.digitalRead(IN5);
}
