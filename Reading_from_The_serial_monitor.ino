int numBlinks;
int j;
int bt=500;
String msg="How Many Blinks do you want:";
int Redpin=12;


void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(Redpin, OUTPUT);
}

void loop() {
 // put your main code here, to run repeatedly:
 Serial.println(msg);
 while(Serial.available()==0){
  
 }
 numBlinks=Serial.parseInt();
 for(j=1;j<=numBlinks;j=j+1){
  digitalWrite(Redpin, HIGH);
  delay(bt);
  digitalWrite(Redpin, LOW);
  delay(bt);
   
 }
}
