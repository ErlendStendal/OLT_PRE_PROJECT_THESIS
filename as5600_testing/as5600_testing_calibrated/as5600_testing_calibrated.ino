#include <Wire.h>
#include "AS5600.h"  // Include the AS5600 library header

AS5600 sensor(&Wire);  // Initialize the AS5600 sensor object with the default I2C Wire

void setup() {
  Serial.begin(115200);
  Wire.begin(21, 22);  // Initialize I2C with SDA on GPIO 21 and SCL on GPIO 22 (ESP32 default)

  // Check if the sensor is connected
  if (!sensor.begin()) {
    Serial.println("AS5600 sensor not detected. Please check wiring.");
    while (1);  // Halt if the sensor is not detected
  } else {
    Serial.println("AS5600 sensor detected successfully.");
  }
}

void loop() {

    // Read and print the raw angle in degrees
    uint16_t rawAngle = sensor.readAngle();
    float angleDegrees = rawAngle * AS5600_RAW_TO_DEGREES;

    //Serial.print("Angle (raw): ");
    //Serial.print(rawAngle);
    //Serial.print("\tAngle (degrees): ");
    Serial.println(calibrate(angleDegrees));
    //Serial.println("°");

  delay(50);  // Adjust delay as needed
}
