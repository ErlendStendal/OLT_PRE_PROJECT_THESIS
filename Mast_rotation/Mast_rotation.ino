// Rotary Angle Sensor Setup
const int sensorPin = A0; // Connect to the signal pin of the sensor
const int midValue = 512; // Middle value for a 10-bit ADC (0-1023 range)

void setup() {
  Serial.begin(9600); // Start serial communication at 9600 baud
  pinMode(sensorPin, INPUT);
}

void loop() {
  int rawValue = analogRead(sensorPin); // Read raw analog value (0-1023)
  
  // Map the range to -135 to +135 degrees for a 270-degree sensor
  int angle = map(rawValue, 0, 1023, -150, 150);
  
  // Print the angle to the Serial Monitor
  Serial.print("Angle: ");
  Serial.println(angle);
  
  delay(100); // Add a short delay for readability
}
