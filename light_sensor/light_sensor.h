#ifndef LIGHT_SENSOR_H
#define LIGHT_SENSOR_H
/**
* @file light_sensor.h
*
* @author Sinan Kaya
* @date 10.1.2012
*
* @brief Headerdatei 
*
**/ 
/**
* @brief Mit dieser Funktion wird Helligkeit in Form einer Value zw. 0 und 1023 ausgegeben. 
*
* @param[in] sensorPin Jener Pin der an den Photowiderstand angeschlossen ist.
*/
int calc_light(int sensorPin);
#endif
