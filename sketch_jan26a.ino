void setup() {
  // put your setup code here, to run once: 
  //just when turnon
  pinMode(LED_BUILTIN, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
   digitalWrite(LED_BUILTIN,HIGH); //comando 
   delay(1000); 
   digitalWrite(LED_BUILTIN,LOW); 
   delay(1000); 
}
