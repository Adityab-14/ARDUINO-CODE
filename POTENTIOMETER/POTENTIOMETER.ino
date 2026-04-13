#define blue 4
#define green 2
#define red 7
void setup()
{
  Serial.begin(9600);
  pinMode(red,OUTPUT);
  pinMode(blue,OUTPUT);
  pinMode(green,OUTPUT);
}

void loop()
{
// put your main code here, to run respectively:
  
 digitalWrite(red,HIGH);
  Serial.println("red is ON");
  delay(5000);
 digitalWrite(red,LOW);
  delay(1000);
  Serial.println("red is off");

  digitalWrite(blue,HIGH);
  Serial.println("blue is ON");
  delay(5000);
  digitalWrite(blue,LOW);
   delay(1000);
  Serial.println("blue is OFF");

  digitalWrite(green,HIGH);
  Serial.println("LED3 is ON");
  delay(5000);
  digitalWrite(green,LOW);
   delay(1000);
  Serial.println("LED3 is off");

  
}
