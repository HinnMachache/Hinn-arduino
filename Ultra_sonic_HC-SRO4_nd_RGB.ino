int trigPin= 12;
int echoPin= 11;
int blue= 4;
int green= 5;
int red= 6;
int safeD= 30;
int saferD= 20;
int safestD= 10;
float duration;
float distance;
void setup() {
 Serial.begin(9600);
 pinMode(trigPin, OUTPUT);
 pinMode(echoPin, INPUT);
 pinMode(blue, OUTPUT);
 pinMode(green, OUTPUT);
 pinMode(red, OUTPUT);

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
Serial.print(distance);
Serial.println( "cm.");
delay(500);
 }
