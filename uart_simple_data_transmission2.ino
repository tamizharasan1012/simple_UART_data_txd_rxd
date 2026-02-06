char mystr[8];
void setup() {
 
  Serial.begin(9600);
}

void loop() {
  Serial.readBytes(mystr,8); 
  Serial.println(mystr);
  delay(100);
}