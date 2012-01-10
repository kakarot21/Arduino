
//#include "C:\Users\Kakarot\Desktop\Project\light_sensor\light_sensor.h"
#include "light_sensor.h"
//#include "C:\Users\Kakarot\Desktop\Project\blink_LED\blink_LED.h"
//#include "../blink_LED/blink_LED.h"

int temp;

void setup() {
  //blink_setup(temp1);

}

void loop() {
  temp = calc_light(5);
  //blink_led(temp2);
  //pinMode(1,OUTPUT);
}


