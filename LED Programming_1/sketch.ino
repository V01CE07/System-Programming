void setup(){
  pinMode(13, OUTPUT); 
  
  
  digitalWrite(13, HIGH);
    
  delay(3000);
  }

void loop(){
  digitalWrite(13, HIGH);   
  delay(100);

  digitalWrite(13, LOW);  
  delay(900);   
}