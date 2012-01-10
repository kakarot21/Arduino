/**
* @file blink_LED.c
*
* @author Sinan Kaya
* @date 10.1.2012
*
* @brief Mit Hilfe dieser Klasse blinkt ein beliebiges LED. 
*
**/ 
#include "blink_LED.h"
/*************************************************************
***************GLOBALE*VARIABLEN******************************
*************************************************************/
int pin = -1;
int value = LOW;
long previousMillis = 0;

void blink_setup(int blinkPin){
	pinMode(blinkPin,OUTPUT);
	pin = blinkPin;
}

void blink_led(int period){
	if(pin == -1) break;
	if(millis() - previousMillis > period){
		previousMillis = millis();   // aktuelle Zeit abspeichern
		// LED Zustand wecheln.
		if(value == LOW){
			value = HIGH;
		}else{
			value = LOW;
		}
		// Wert auf den Ausgang schreiben
		digitalWrite(pin, value);
	}
}