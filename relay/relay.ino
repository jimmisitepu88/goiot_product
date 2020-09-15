#define REL1 25
#define REL2 26 

void setup() {  
  // put your setup code here, to run once:
  Serial.begin(115200);
  pinMode(REL1, OUTPUT);
  pinMode(REL2, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.println("NYALA");
  digitalWrite(REL1, HIGH);
  digitalWrite(REL2, LOW);delay(1000);
  Serial.println("PADAM.");
  digitalWrite(REL1, LOW);
  digitalWrite(REL2, HIGH);delay(1000);
}
