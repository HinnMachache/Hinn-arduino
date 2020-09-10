int trigPin= 12;
int echoPin= 11;
float duration;
float distance;
void setup() {
 Serial.begin(9600);
 pinMode(trigPin, OUTPUT);
 pinMode(echoPin, INPUT);

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
 Serial.print(" Distance: ");
 Serial.println(distance);
 Serial.println(" cm.");
 delay(25);
 
}
