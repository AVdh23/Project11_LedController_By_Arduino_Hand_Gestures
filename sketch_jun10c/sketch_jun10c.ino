int ledPins[] = {2, 3, 4, 5, 6};
int ledCount = 5;

void setup() {
  for (int i = 0; i < ledCount; i++) {
    pinMode(ledPins[i], OUTPUT);
    digitalWrite(ledPins[i], LOW);
  }
  
  // Start serial communication
  Serial.begin(9600);
}

void loop() {
  if (Serial.available() > 0) {
    int total = Serial.parseInt();
    updateLEDs(total);
  }
}

void updateLEDs(int total) {
  for (int i = 0; i < ledCount; i++) {
    if (i < total) {
      digitalWrite(ledPins[i], HIGH);
    } else {
      digitalWrite(ledPins[i], LOW);
    }
  }
}
