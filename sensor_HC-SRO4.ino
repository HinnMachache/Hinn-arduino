int trigpin= 12;
int echopin= 11;
int pingtravelTime;

void setup() {
 pinMode(trigpin, OUTPUT);
 pinMode(echopin, INPUT);
 Serial.begin(9600);
}

void loop() {
  digitalWrite(trigpin, LOW);
  delayMicroseconds(10);
  digitalWrite(trigpin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigpin, LOW);
 pingtravelTime=pulseIn(echopin, HIGH);
  delay(25);
  Serial.println(pingtravelTime);
}
