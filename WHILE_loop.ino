int j;
void setup() {
Serial.begin(9600);
}

void loop() {
  j=1;
  while (j<=10){
   Serial.println(j); 
  }
}
