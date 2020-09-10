#include<Servo.h>
int trigPin= 12;
int echoPin= 11;
int myservo= 9;
int safetydistance= 30;
float duration;
float distance;
Servo hinn;
void setup() {
 Serial.begin(9600);
 pinMode(trigPin, OUTPUT);
 pinMode(echoPin, INPUT);
 hinn.attach(9);
  hinn.write(0);
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
 hinn.write(90);
 }
 else{
 hinn.write(0);
 }
Serial.print(" Distance: ");
Serial.print(distance);
Serial.println( "cm.");
delay(500);
 }
