char mystr[10] = "tamizh\0";

void setup() 
{
  Serial.begin(9600);
    // put your setup code here, to run once:

}

void loop()
{
  
  Serial.write(mystr,8);
  delay(100);
}
