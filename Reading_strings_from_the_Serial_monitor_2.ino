int Redpin= 13;
int Greenpin= 11;
int Bluepin= 10;
String myColor;
String msg="What colour LED: ";
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(Redpin, OUTPUT);
pinMode(Greenpin, OUTPUT);
pinMode(Bluepin, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
Serial.println(msg);
while(Serial.available()==0){
  
}
myColor=Serial.readString();
if(myColor=="red"|| myColor=="RED"){
  digitalWrite(Redpin, HIGH);
  digitalWrite(Greenpin, LOW);
  digitalWrite(Bluepin, LOW);
}

if(myColor=="green"|| myColor=="GREEN"){
  digitalWrite(Redpin, LOW);
  digitalWrite(Greenpin, HIGH);
  digitalWrite(Bluepin, LOW);
}

if(myColor=="blue"|| myColor=="BLUE"){
  digitalWrite(Redpin, LOW);
  digitalWrite(Greenpin, LOW);
  digitalWrite(Bluepin, HIGH);
}
}
