// Set up the pin where the built-in LED is connected
const int ledPin = 13;  // Pin 13 has the built-in LED on most Arduino boards

void setup() {
  // Initialize the digital pin as an output.
  pinMode(ledPin, OUTPUT);
}

void loop() {
  // Turn the LED on
  digitalWrite(ledPin, HIGH);
  // Wait for 1000 milliseconds (1 second)
  delay(1000);
  
  // Turn the LED off
  digitalWrite(ledPin, LOW);
  // Wait for 1000 milliseconds (1 second)
  delay(1000);
}

