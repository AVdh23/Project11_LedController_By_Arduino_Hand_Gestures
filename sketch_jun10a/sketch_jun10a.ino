// Define the LED pins
int ledPins[] = {2, 3, 4, 5, 6};
// Define the number of LEDs
int numLEDs = sizeof(ledPins) / sizeof(ledPins[0]);

// Define the time interval for each LED
int onDuration = 500;    // milliseconds

void setup() {
  // Set LED pins as OUTPUT
  for (int i = 0; i < numLEDs; i++) {
    pinMode(ledPins[i], OUTPUT);
  }
}

void loop() {
  // Turn on each LED one after the other
  for (int i = 0; i < numLEDs; i++) {
    digitalWrite(ledPins[i], HIGH);  // Turn LED on
    delay(onDuration);               // Wait for the specified duration
    digitalWrite(ledPins[i], LOW);   // Turn LED off
  }
}
