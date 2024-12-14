#include <AccelStepper.h>

// Define pins for each motor on the CNC shield
const int X_STEP_PIN = 2;
const int X_DIR_PIN = 5;

// Create AccelStepper instances for each motor
AccelStepper stepperX(AccelStepper::DRIVER, X_STEP_PIN, X_DIR_PIN);

// Define speeds for continuous rotation
const float X_SPEED = 20.0; // Speed for x motor


void setup() {
  // Initialize serial communication
  Serial.begin(9600);
  Serial.println("Starting motors: X");

  // Set speeds for continuous rotation
  stepperX.setMaxSpeed(X_SPEED);
  stepperX.setSpeed(X_SPEED); // Set constant speed for X motor
}

void loop() {
  // Run Y and Z motors continuously
  stepperX.runSpeed(); // Continuous rotation for Y motor
}
