int res_val = 0 ;
int respin = A5;
int buzzer = A0;
void setup() {
  Serial.begin(9600);
}

void loop() {
  res_val = analogRead(respin);
  Serial.print(res_val);
  if(res_val>300){
    Serial.print("buzzer");
    tone(buzzer,1000);
    noTone(buzzer);
  }else{
    noTone(buzzer);
    pinMode(buzzer,INPUT);
  }
  Serial.print("\n");  
  delay(1000);

}
