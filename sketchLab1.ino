// Modifided by: Jessica Henry 
// Date: 27.01.2020

void setup() {
  // put your setup code here, to run once: 
  //just when turnon
  pinMode(LED_BUILTIN, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
   digitalWrite(LED_BUILTIN,HIGH); //comando 
   delay(500); 
   digitalWrite(LED_BUILTIN,LOW); 
   delay(500); 
}

