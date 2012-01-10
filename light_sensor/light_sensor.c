/**
* @file light_sensor.c
*
* @author Sinan Kaya
* @date 10.1.2012
*
* @brief Mit Hilfe dieser Klasse wird die Helligkeit in der Umgebung ausgelesen. 
*
**/ 
#include "light_sensor.h"
int calc_light(int sensorPin){
	return analogRead(sensorPin);
}
