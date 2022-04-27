
int LED =9;
int BUZZER= 10;
int SMOKE_Sensor=3;
int SMOKE_Detected;
char inchar;
void setup() {

pinMode(LED,OUTPUT);
pinMode(SMOKE_Sensor,INPUT);
pinMode(BUZZER,OUTPUT);
  }
                
void loop()
{
SMOKE_Detected = digitalRead(SMOKE_Sensor);
Serial.println(SMOKE_Detected);
if(SMOKE_Detected==1)
{
  Serial.println("SMOKE_Detected");
  digitalWrite(LED,HIGH);
  digitalWrite(BUZZER,HIGH);
  tone(BUZZER,1000);}
  else
  {Serial.println("NO SMOKE_Detected");
  digitalWrite(LED,LOW);
  digitalWrite(BUZZER,LOW);
  noTone(BUZZER);}}


  
  
  
