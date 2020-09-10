#include <Servo.h>
int blue= 4;
int white= 5;
Servo hinn;

 void setup(){
  hinn.attach(6);
  hinn.write(0);
  pinMode(blue, OUTPUT);
  pinMode(white, OUTPUT);
 }

  void loop(){
    hinn.write(0);
    delay(1000);
    digitalWrite(blue, HIGH);
    delay(500);
    digitalWrite(blue, LOW);
    hinn.write(180);
    digitalWrite(white, HIGH);
    delay(500);
    digitalWrite(white, LOW);
    
  }
