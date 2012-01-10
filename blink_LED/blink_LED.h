#ifndef BLINK_LED_H
#define BLINK_LED_H
/**
* @file blink_LED.h
*
* @author Sinan Kaya
* @date 10.1.2012
*
* @brief Headerdatei 
*
**/ 
/*********************************************************************
********************DEFINITIONS***************************************
*********************************************************************/
#define LOW 0
#define HIGH 1

/**
* @brief Mit dieser Funktion wird ein beliebiges LED ein und ausgeschaltet 
*
* @param[in] value  Zeitdauer zwischen Ein- und Ausschalten in ms.  
*/
void blink_led(int period);
/**
* @brief Mit dieser Funktion wird ein beliebiges LED ein und ausgeschaltet (SETUP)
*
* @param[in] ledPin Jener Pin der ein- und ausgeschaltet wird.
*/
void blink_setup(int blinkPin);
#endif