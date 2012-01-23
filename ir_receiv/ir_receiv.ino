#include <IRremote.h>
int RECV_PIN = 11;
IRrecv irrecv(RECV_PIN);
decode_results results;

void setup()
{
  Serial.begin(9600);
  irrecv.enableIRIn(); // Start the receiver
}

void loop() {
  if (irrecv.decode(&results)) {
    //Serial.println(results.value, HEX);
    if(results.value == 0x20DF00FF){
      Serial.println("AUF");
    }
    irrecv.resume(); // Receive the next value
  }
}
