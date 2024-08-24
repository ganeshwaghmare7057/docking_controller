int sensor_value;
int TRIGG_IN = 4;
void setup() 
{
  // put your setup code here, to run once:
  Serial.begin(115200);
  pinMode(A0, INPUT);
  pinMode(4, OUTPUT);
}
void loop() 
{
  // put your main code here, to run repeatedly: 
  sensor_value = (analogRead(A0));
  Serial.println(sensor_value);
  delay(500);

  if(sensor_value < 950)
  {
      Serial.println("Docked");
      digitalWrite(4, HIGH);
      delay(500);
  } 
  else
  { 
      Serial.println("Unlocked");
      digitalWrite(4, LOW);
      delay(500);  
  } 
}
