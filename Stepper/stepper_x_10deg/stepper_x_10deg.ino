#include <AccelStepper.h>

// Define pins for X motor on the CNC shield
const int X_STEP_PIN = 2;
const int X_DIR_PIN = 5;

// Create AccelStepper instance for X motor
AccelStepper stepperX(AccelStepper::DRIVER, X_STEP_PIN, X_DIR_PIN);

// Define parameters
const int STEPS_PER_REV = 800; // Adjust based on your motor (1.8 degrees per step)
const float DEGREES_PER_STEP = 360.0 / STEPS_PER_REV;
const int TARGET_ANGLE = 10; // Target movement in degrees
const int STEPS_PER_MOVE = TARGET_ANGLE / DEGREES_PER_STEP;
const float X_SPEED = 100.0; // Speed in steps per second

void setup() {
  Serial.begin(9600);
  Serial.println("Starting motor: X");

  // Initialize motor speed and acceleration
  stepperX.setMaxSpeed(X_SPEED);
  stepperX.setAcceleration(100); // Optional, but helps smooth movement
}

void loop() {
  static bool moving = false;
  static unsigned long lastMoveTime = 0;

  if (!moving) {
    // Move the motor by the calculated steps
    Serial.println("Moving 10 degrees");
    stepperX.move(STEPS_PER_MOVE);
    moving = true;
  }

  // Continue running until the motor reaches its target
  if (moving) {
    stepperX.run();  // Continue movement
    if (stepperX.distanceToGo() == 0) {
      // Stop for 3 seconds after reaching target
      Serial.println("Pausing for 3 seconds");
      delay(3000);
      moving = false; // Reset moving state
    }
  }
}
