int motion_1 = 2;
int light_1 = 13;
void setup(){
  pinMode (motion_1,INPUT);
  pinMode (light_1, OUTPUT);
  Serial.begin(9600);
}



void loop (){
  
 
  
  digitalWrite (light_1,LOW);
  delay(200); //this delay is to let the sensor settle down before taking a reading
  int sensor_1 = digitalRead(motion_1);
 // Serial.println(analogRead(A0));
  if(analogRead(A0)<750 && analogRead(A0)>735){
  Serial.println(6);
  delay(20);
  }
  else if(analogRead(A0)<735){
  Serial.println(43);
  delay(20);
  
  
  }
  if (sensor_1 == LOW){
    
    Serial.println(4);
    digitalWrite(light_1,HIGH);
    delay(5);
    digitalWrite(light_1,LOW);
    delay(5);

  }
  else if (sensor_1 == HIGH){
    
    Serial.println(43);
    delay(100);
  
  }
  
}
