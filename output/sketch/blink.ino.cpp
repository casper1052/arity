#include <Arduino.h>
#line 1 "/workspaces/arity/blink/blink.ino"
#line 1 "/workspaces/arity/blink/blink.ino"
void setup();
#line 4 "/workspaces/arity/blink/blink.ino"
void loop();
#line 1 "/workspaces/arity/blink/blink.ino"
void setup(){
	pinMode(LED_BUILTIN, OUTPUT);
}
void loop(){
	digitalWrite(LED_BUILTIN,HIGH);
	delay(100);
	digitalWrite(LED_BUILTIN,LOW);
	delay(100);
}

