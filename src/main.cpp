#include <Arduino.h>

const int potPin = 15;

int potValue = 0;

void setup() {
	Serial.begin(115200);
}

void loop() {
	
	
	int analogValue = analogRead(A0);  
	Serial.print("Analog value: ");
	Serial.println(analogValue);      
  	delay(500);
}