/*
  
  JoystickArduinoBasicExample.pde
  
  A basic sketch to demonstrate reading values from the joystick shield
  
  How to use:
  
    * Connect joystick shield to your Arduino
    * Upload this sketch to your Arduino
    * Open the Arduino IDE Serial Monitor (set to 9600 baud)
    * Waggle joystick, push buttons
  
  Requires:
  
    * Arduino
    * SparkFun Joystick Shield

  Written for SparkFun Arduino Inventor's Kit CIRC-JOY

  Based on original example by Ryan Owens

 */


// Store the Arduino pin associated with each input
const byte PIN_BUTTON_SELECT = 2; // Select button is triggered when joystick is pressed

const byte PIN_ANALOG_X = 0;
const byte PIN_ANALOG_Y = 1;
long lastDebounceTime = 0;  // the last time the output pin was toggled
long debounceDelay = 250;

void setup() {
  Serial.begin(9600);

  // Specify each pin connected to a pushbutton as an input.
  // Also enable the Arduino's internal "pull-up" resistors
  // for each pushbutton we want to read--this means the shield
  // doesn't need to have resistors on it.
  // Note that when a pull-up resistor is used on a pin the
  // meaning of the values read are reversed compared to their
  // usual meanings:
  //    * HIGH = the button is not pressed
  //    * LOW = the button is pressed  
  pinMode(PIN_BUTTON_SELECT, INPUT);  
  digitalWrite(PIN_BUTTON_SELECT, HIGH);  
  attachInterrupt(0,pressed,RISING);
}


void loop() {
  
  Serial.print("x:");
  Serial.print(analogRead(PIN_ANALOG_X));
  Serial.print(" ");
  
  Serial.print("y:");
  Serial.print(analogRead(PIN_ANALOG_Y));
  Serial.println("");  
  /*
  Serial.print("s:");
  Serial.print(digitalRead(PIN_BUTTON_SELECT));
  Serial.print(" ");
  
  Serial.println();
  delay()
  */
  delay(500);
}
void pressed(){
  //detachInterrupt(0);
  
  if(millis()-lastDebounceTime > debounceDelay){
    Serial.println("Pressed");
    lastDebounceTime = millis();
  }
  
  //attachInterrupt(0,pressed,RISING);
}
