// Define the potentiometer pin
#define POT_PIN 34 // Replace with your ADC pin, GPIO34 is used in this example

void setup() {
  // Initialize Serial communication
  Serial.begin(115200); // Set baud rate for Serial communication
  delay(1000); // Wait for Serial Monitor to initialize
}

void loop() {
  // Read the raw analog value from the potentiometer
  int potValue = analogRead(POT_PIN);

  // Map the raw value (98 to 3345) to degrees (-90 to 90)
  float degrees = map(potValue, 98, 3345, -90, 90);

  // Print the mapped value (in degrees) to the Serial Plotter
  Serial.println(degrees);

  // Small delay for smoother plotting
  delay(300); // Adjust for desired update speed
}
