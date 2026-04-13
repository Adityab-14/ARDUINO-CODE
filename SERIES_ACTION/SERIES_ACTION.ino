#define my_led 7
#define my_leds 4
void setup() {
pinMode(my_led, OUTPUT);
Serial.begin(9600);
}

void loop() {
  
  while(true){
    //for first led 1
  digitalWrite(my_led, HIGH);
   delay(1000);
  Serial.println("LED turns ON");
  digitalWrite(my_led, LOW);
  //delay(1000);
  Serial.println("LED turns OFF");
  //led 2
  digitalWrite(my_leds, HIGH);
  delay(1000);
  digitalWrite(my_leds, LOW);
  //delay(1000);
  }
}
