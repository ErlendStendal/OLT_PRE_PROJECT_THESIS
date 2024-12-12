// Oppdatert 25.09.2024:
// Printer en ID på slutten av GPS data
// Når den ID'en er printet tillates IMU dataen å skrives
// Ikke testet

// The following header files are part of the ESP32 library
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

// Initialize components
Adafruit_BNO055 bno = Adafruit_BNO055(55);

File dataFile;

void setup() {
  // Initialize serial communication
  Serial.begin(115200);
  Serial2.begin(9600, SERIAL_8N1, 16, 17);  // GPS on UART2, RX2=16, TX2=17
  
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
  // Read button state
  if (digitalRead(BUTTON_PIN) == LOW) {
    delay(200);  // Debounce delay
    
    // Toggle recording state
    isRecording = !isRecording;
    
    if (isRecording) {
      // Start recording
      digitalWrite(LED_PIN, HIGH);  // Turn on LED
      Serial.println("Recording started.");
      appendFile(SD, "/datalog.txt", "Time(ms),AccelX,AccelY,AccelZ,MagX,MagY,MagZ,GyroX,GyroY,GyroZ,GPS\n");
      
    } else {
      // Stop recording
      Serial.println("Recording stopped.");
      digitalWrite(LED_PIN, LOW);  // Turn off LED
    }
    
    delay(1000);  // Debounce delay to avoid multiple triggers
  }

  // If recording, log data
  if (isRecording) {
    logSensorData();
  }
}

void logSensorData() {
  // Get GPS data from Serial2
  String gpsData = "";
  String GPS_id = "ABC";
  while (Serial2.available()) {
    char c = Serial2.read();
    gpsData += c, GPS_id;
  }

  // Only log IMU data if valid GPS data is available
  if (gpsData.length() > 0) {
    if (gpsData.endsWith(GPS_id)){
      // Log data from BNO055
      sensors_event_t orientationData, accelData, magData, gyroData;
      bno.getEvent(&orientationData, Adafruit_BNO055::VECTOR_EULER);
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
                    String(gyroData.gyro.z) + "," +
                    gpsData + "\n";

      // Log the data to SD card
      Serial.println("Saving data to SD card: ");
      Serial.println(dataMessage);
      appendFile(SD, "/datalog.txt", dataMessage.c_str());
      }
  }
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
