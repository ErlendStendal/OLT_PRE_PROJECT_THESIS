#include <Wire.h>
#include <Adafruit_Sensor.h>
#include <Adafruit_BNO055.h>
#include "FS.h"
#include "SD.h"
#include <SPI.h>

// Define pins for components
#define LED_PIN 2
#define BUTTON_PIN 4
#define SD_CS_PIN 5

// State variables
bool isRecording = false;
String dataMessage = "";  // For logging data
unsigned long lastImuSampleTime = 0;
const unsigned long imuSampleInterval = 100;  // IMU sampling every 100ms

// Initialize components
Adafruit_BNO055 bno = Adafruit_BNO055(55);
File dataFile;

void setup() {
  // Initialize serial communication
  Serial.begin(115200);
  
  // Initialize button
  pinMode(BUTTON_PIN, INPUT_PULLUP);
  
  // Initialize LED
  pinMode(LED_PIN, OUTPUT);
  digitalWrite(LED_PIN, LOW);  // LED off initially
  
  // Initialize SD card
  if (!SD.begin(SD_CS_PIN)) {
    Serial.println("SD card initialization failed!");
    return;
  }
  Serial.println("SD card initialized.");

  // Initialize BNO055
  if (!bno.begin()) {
    Serial.println("BNO055 not detected!");
    while (1);
  }
  bno.setExtCrystalUse(true);  // Use external crystal for accuracy
  
  Serial.println("Setup complete. Press the button to start recording.");
}

void loop() {
  // Handle button press to toggle recording
  if (digitalRead(BUTTON_PIN) == LOW) {
    delay(200);  // Debounce delay
    
    // Toggle recording state
    isRecording = !isRecording;
    
    if (isRecording) {
      // Start recording
      digitalWrite(LED_PIN, HIGH);  // Turn on LED
      Serial.println("Recording started.");
      appendFile(SD, "/datalog.txt", "Time(ms),AccelX,AccelY,AccelZ,MagX,MagY,MagZ,GyroX,GyroY,GyroZ\n");
      
    } else {
      // Stop recording
      Serial.println("Recording stopped.");
      digitalWrite(LED_PIN, LOW);  // Turn off LED
    }
    
    delay(1000);  // Debounce delay to avoid multiple triggers
  }

  // If recording, log data
  if (isRecording) {
    unsigned long currentMillis = millis();

    // Handle IMU logging (every 100ms)
    if (currentMillis - lastImuSampleTime >= imuSampleInterval) {
      lastImuSampleTime = currentMillis;
      logImuData();  // Log IMU data
    }
  }
}

void logImuData() {
  // Log IMU data from BNO055
  sensors_event_t accelData, magData, gyroData;
  bno.getEvent(&accelData, Adafruit_BNO055::VECTOR_ACCELEROMETER);
  bno.getEvent(&magData, Adafruit_BNO055::VECTOR_MAGNETOMETER);
  bno.getEvent(&gyroData, Adafruit_BNO055::VECTOR_GYROSCOPE);

  // Prepare the log data message
  dataMessage = String(millis()) + "," + 
                String(accelData.acceleration.x) + "," + 
                String(accelData.acceleration.y) + "," + 
                String(accelData.acceleration.z) + "," +
                String(magData.magnetic.x) + "," +
                String(magData.magnetic.y) + "," +
                String(magData.magnetic.z) + "," +
                String(gyroData.gyro.x) + "," +
                String(gyroData.gyro.y) + "," +
                String(gyroData.gyro.z) + "\n";

  // Append the IMU data to the SD card
  Serial.println("Saving IMU data to SD card: ");
  Serial.println(dataMessage);
  appendFile(SD, "/datalog.txt", dataMessage.c_str());
}

// Function to write to the SD card (don't modify)
void writeFile(fs::FS &fs, const char * path, const char * message) {
  Serial.printf("Writing file: %s\n", path);

  File file = fs.open(path, FILE_WRITE);
  if(!file) {
    Serial.println("Failed to open file for writing");
    return;
  }
  if(file.print(message)) {
    Serial.println("File written");
  } else {
    Serial.println("Write failed");
  }
  file.close();
}

// Function to append data to the SD card (don't modify)
void appendFile(fs::FS &fs, const char * path, const char * message) {
  Serial.printf("Appending to file: %s\n", path);

  File file = fs.open(path, FILE_APPEND);
  if(!file) {
    Serial.println("Failed to open file for appending");
    return;
  }
  if(file.print(message)) {
    Serial.println("Message appended");
  } else {
    Serial.println("Append failed");
  }
  file.close();
}
