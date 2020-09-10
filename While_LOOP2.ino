int Potval;
int delayTime= 100;
int Potpin= A0;
int Redpin= 7;
void setup() {
  Serial.begin(9600);
  pinMode(Potpin, INPUT);
  pinMode(Redpin, OUTPUT);
}

void loop() {
  Potval=analogRead(Potpin);
  Serial.println(Potval);
  delay(delayTime);

  while(Potval>1000){
    digitalWrite(Redpin, HIGH);
    Potval=analogRead(Potpin);
    Serial.println(Potval);
    delay(delayTime);
  }
  digitalWrite(Redpin, LOW);
}
