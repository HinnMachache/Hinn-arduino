int trigPin= 12;
int echoPin= 11;
int white= 4;
int blue= 5;
int safetydistance= 30;
float duration;
float distance;
void setup() {
 Serial.begin(9600);
 pinMode(trigPin, OUTPUT);
 pinMode(echoPin, INPUT);
 pinMode(white, OUTPUT);
 pinMode(blue, OUTPUT);

}

void loop() {
 digitalWrite(trigPin, LOW);
 delayMicroseconds(5);
 digitalWrite(trigPin, HIGH);
 delayMicroseconds(10);
 digitalWrite(trigPin, LOW);
 duration=pulseIn(echoPin, HIGH);
 delay(50);
 distance=duration*0.017;
 
 if(distance <=safetydistance){
 digitalWrite(white, HIGH);
 digitalWrite(blue, HIGH);
 }
 else{
digitalWrite(white, LOW);
digitalWrite(blue, LOW);
 }
Serial.print(" Distance: ");
Serial.print(distance);
Serial.println( "cm.");
delay(500);
 }
