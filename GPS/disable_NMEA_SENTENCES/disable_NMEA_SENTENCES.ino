// Use hardware Serial1 for GPS communication (RX = GPIO16, TX = GPIO17)
#define RXD1 16
#define TXD1 17

void setup() {
  // Start serial communication with the GPS module and Serial Monitor
  Serial.begin(115200);       // Monitor
  Serial1.begin(9600, SERIAL_8N1, RXD1, TXD1); // GPS at 9600 baud

  // Set the navigation rate to 5 Hz
  setNavigationRate();

  // Disable all NMEA messages
  enableNMEAMessage(0x00); // GGA
  disableNMEAMessage(0x01); // GLL
  disableNMEAMessage(0x02); // GSA
  disableNMEAMessage(0x03); // GSV
  disableNMEAMessage(0x04); // RMC
  disableNMEAMessage(0x05); // VTG
  disableNMEAMessage(0x06); // GRS
  disableNMEAMessage(0x07); // GST
  disableNMEAMessage(0x08); // ZDA
  disableNMEAMessage(0x09); // GBS
  disableNMEAMessage(0x0A); // DTM

  // Save configuration permanently (CFG-CFG)
  saveConfiguration();
}

void loop() {
  // Relay GPS data to Serial Monitor (optional, for debugging)
  if (Serial1.available()) {
    Serial.write(Serial1.read());
  }
}

// Function to set the navigation update rate
void setNavigationRate() {
  uint8_t ubxMessage[] = { 
    0xB5, 0x62,       // Sync chars
    0x06, 0x08,       // Message class and ID (CFG-RATE)
    0x06, 0x00,       // Payload length (6 bytes)
    0xC8, 0x00,       // measRate = 200ms (0x00C8 = 200 in hex)
    0x01, 0x00,       // navRate = 1 (update every measurement)
    0x01, 0x00,       // timeRef = GPS time (1 = GPS time)
    0xDF, 0x77        // Checksum (calculated for the payload)
  };
  sendUBX(ubxMessage, sizeof(ubxMessage));
}

void disableNMEAMessage(uint8_t msgID) {
  uint8_t ubxMessage[] = { 
    0xB5, 0x62,       // UBX Header
    0x06, 0x01,       // CFG-MSG Class and ID
    0x03, 0x00,       // Payload length (3 bytes)
    0xF0, msgID, 0x00 // F0 class, msgID, rate 0 (disable)
  };
  sendUBX(ubxMessage, sizeof(ubxMessage));
}

void enableNMEAMessage(uint8_t msgID) {
  uint8_t ubxMessage[] = { 
    0xB5, 0x62,       // UBX Header
    0x06, 0x01,       // CFG-MSG Class and ID
    0x03, 0x00,       // Payload length (3 bytes)
    0xF0, msgID, 0x01 // F0 class, msgID, rate 1 (enable)
  };
  sendUBX(ubxMessage, sizeof(ubxMessage));
}

void saveConfiguration() {
  uint8_t ubxSaveConfig[] = { 
    0xB5, 0x62,       // UBX Header
    0x06, 0x09,       // CFG-CFG Class and ID
    0x0D, 0x00,       // Payload length (13 bytes)
    0x00, 0x00, 0x00, 0x00, // Clear mask (no reset)
    0xFF, 0xFF, 0xFF, 0xFF, // Save mask (save all settings)
    0x00, 0x00, 0x00, 0x00, // Load mask (not used here)
    0x00               // Device mask (BBR only)
  };
  sendUBX(ubxSaveConfig, sizeof(ubxSaveConfig));
}

void sendUBX(uint8_t *msg, uint8_t len) {
  uint8_t ck_a = 0, ck_b = 0;

  // Calculate checksum
  for (uint8_t i = 2; i < len; i++) { // Skip the first 2 bytes (header)
    ck_a += msg[i];
    ck_b += ck_a;
  }

  // Send message
  for (uint8_t i = 0; i < len; i++) {
    Serial1.write(msg[i]);
  }

  // Send checksum
  Serial1.write(ck_a);
  Serial1.write(ck_b);
}
