#include <Servo.h>

Servo myservo;
Servo myservo2;

int sensorPin0 = A0;    
int sensorPin1 = A1;

int sensorValue0 = 0;
int sensorValue1 = 0;

void setup() {
  myservo.attach(7,200,2500);
  myservo2.attach(6,200,2500);
}

void loop() {
  // read the value from the sensor:
  sensorValue0 = analogRead(sensorPin0);
  sensorValue1 = analogRead(sensorPin1); 
  myservo.write(map(sensorValue0, 0, 1023, 0, 179));
  myservo2.write(map(sensorValue1, 0, 1023, 0, 179));  
 
  delay(20);
}
