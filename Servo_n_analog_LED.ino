#include <Servo.h>
Servo val;
int blue= 4;
int white= 5;
int delayT= 1000;
int waitT= 500;
int start= 0;
int done= 180;
int bright= 5g0;
int brightest= 255;
int dim= 0;
void setup() {
  val.attach(7);
  pinMode(blue, OUTPUT);
  pinMode(white, OUTPUT);

}

void loop() {
 val.write(start);
 digitalWrite(blue, HIGH);
 delay(waitT);
 digitalWrite(blue, LOW);
 val.write(done);
 analogWrite(white, bright);
 delay(waitT);
 analogWrite(white, brightest);
 delay(waitT);
 analogWrite(white, dim);
 delay(delayT);
 
}
