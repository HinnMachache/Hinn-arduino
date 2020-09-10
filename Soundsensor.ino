int Soundpin= 5;
int Redpin= 13 ;
void setup() {
  pinMode(Redpin, OUTPUT);
  pinMode(Soundpin, INPUT);
}

void loop() {
 int statusSensor= digitalRead(Soundpin);

 if(statusSensor==1){
  digitalWrite(Redpin, HIGH);
 }
else{
  digitalWrite(Redpin, LOW); 
}
}
