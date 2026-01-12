// --- PIN DEFINITIONS ---
const int leftButton = 8;
const int rightButton = 9;
const int hazardButton = 10;

const int leftLEDs = 2;
const int rightLEDs = 3;
const int strobe1 = 4;
const int strobe2 = 5;

// --- VARIABLES ---
bool leftActive = false;
bool rightActive = false;
bool hazardActive = false;

unsigned long prevBlinkMillis = 0;
unsigned long prevStrobeMillis = 0;
const long blinkInterval = 500; // Speed of signal/hazard (0.5 sec)
bool blinkState = LOW;

void setup() {
  pinMode(leftButton, INPUT_PULLUP);
  pinMode(rightButton, INPUT_PULLUP);
  pinMode(hazardButton, INPUT_PULLUP);

  pinMode(leftLEDs, OUTPUT);
  pinMode(rightLEDs, OUTPUT);
  pinMode(strobe1, OUTPUT);
  pinMode(strobe2, OUTPUT);
}

void loop() {
  checkButtons();
  handleBlinking();
  handleStrobes();
}

void checkButtons() {
  // Use "!" because INPUT_PULLUP is LOW when pressed
  if (digitalRead(leftButton) == LOW) {
    delay(200); // Debounce
    leftActive = !leftActive;
    rightActive = false; // Turn off right if left is pressed
    hazardActive = false;
  }
  
  if (digitalRead(rightButton) == LOW) {
    delay(200); 
    rightActive = !rightActive;
    leftActive = false;
    hazardActive = false;
  }

  if (digitalRead(hazardButton) == LOW) {
    delay(200);
    hazardActive = !hazardActive;
    leftActive = false;
    rightActive = false;
  }
}

void handleBlinking() {
  unsigned long currentMillis = millis();

  if (currentMillis - prevBlinkMillis >= blinkInterval) {
    prevBlinkMillis = currentMillis;
    blinkState = !blinkState;
  }

  // Logic for Hazard (Both sides)
  if (hazardActive) {
    digitalWrite(leftLEDs, blinkState);
    digitalWrite(rightLEDs, blinkState);
  } 
  // Logic for Left Signal
  else if (leftActive) {
    digitalWrite(leftLEDs, blinkState);
    digitalWrite(rightLEDs, LOW);
  } 
  // Logic for Right Signal
  else if (rightActive) {
    digitalWrite(rightLEDs, blinkState);
    digitalWrite(leftLEDs, LOW);
  } 
  // Everything Off
  else {
    digitalWrite(leftLEDs, LOW);
    digitalWrite(rightLEDs, LOW);
  }
}

void handleStrobes() {
  unsigned long currentMillis = millis();
  int flashSpeed = 50;   // Rapid flash
  int pauseSpeed = 1000; // Time between strobe bursts

  // Simple aircraft strobe pattern: Double blink then pause
  if (currentMillis - prevStrobeMillis < flashSpeed) {
    digitalWrite(strobe1, HIGH); digitalWrite(strobe2, HIGH);
  } else if (currentMillis - prevStrobeMillis < flashSpeed * 2) {
    digitalWrite(strobe1, LOW);  digitalWrite(strobe2, LOW);
  } else if (currentMillis - prevStrobeMillis < flashSpeed * 3) {
    digitalWrite(strobe1, HIGH); digitalWrite(strobe2, HIGH);
  } else if (currentMillis - prevStrobeMillis < pauseSpeed) {
    digitalWrite(strobe1, LOW);  digitalWrite(strobe2, LOW);
  } else {
    prevStrobeMillis = currentMillis;
  }
}