//CLIENT
//Generated by ChatGPT 02.10.24
//Plotted in MAC adresses of the ESPs collected with the Fetch_MAC.ino
//Sends a string to ESP running with the Server.ino code

#include <esp_now.h>
#include <WiFi.h>

// Define a structure to send messages
typedef struct struct_message {
    char text[32];
} struct_message;

// Create a struct_message to hold outgoing data
struct_message outgoingMessage;

// ======= Replace with your actual MAC addresses =======
// Replace with the **Server ESP32 MAC address**
uint8_t serverAddress[] = {0x58, 0xcf, 0x79, 0x07, 0x3b, 0xf8};  // <--- Insert Server MAC Here

// Optionally, if you need to specify the client's own MAC address
// Not required for sending, but useful for reference
uint8_t clientAddress[] = {0xec, 0x62, 0x60, 0x9b, 0xf8, 0xb0};  // <--- Insert Client MAC Here (Optional)

// =======================================================

// Callback when data is sent
void OnDataSent(const uint8_t *mac_addr, esp_now_send_status_t status) {
    Serial.print("Last Packet Send Status: ");
    Serial.println(status == ESP_NOW_SEND_SUCCESS ? "Delivery Success" : "Delivery Fail");
}

void setup() {
    // Initialize Serial Monitor
    Serial.begin(115200);
    Serial.println("ESP-NOW Client Starting...");

    // Initialize WiFi in Station mode
    WiFi.mode(WIFI_STA);
    Serial.print("ESP32 MAC Address: ");
    Serial.println(WiFi.macAddress());  // Print the MAC address

    // Initialize ESP-NOW
    if (esp_now_init() != ESP_OK) {
        Serial.println("Error initializing ESP-NOW");
        while (true);
    }

    // Register the send callback
    esp_now_register_send_cb(OnDataSent);

    // Define peer information for the server
    esp_now_peer_info_t peerInfo;
    memcpy(peerInfo.peer_addr, serverAddress, 6);  // Copy server MAC address here
    peerInfo.channel = 0;  // Use the same channel as the server
    peerInfo.encrypt = false;  // No encryption

    // Add the server as a peer
    if (esp_now_add_peer(&peerInfo) != ESP_OK){
        Serial.println("Failed to add server as peer");
        while (true);
    }

    Serial.println("ESP-NOW Client Initialized and Ready to Send Messages.");
}

void loop() {
    static int counter = 1;

    // Prepare the message
    snprintf(outgoingMessage.text, sizeof(outgoingMessage.text), "Hello #%d", counter++);

    // Send the message to the server
    esp_err_t result = esp_now_send(serverAddress, (uint8_t *) &outgoingMessage, sizeof(outgoingMessage));

    if (result == ESP_OK) {
        Serial.println("Message sent successfully");
    }
    else {
        Serial.println("Error sending the message");
    }

    // Wait for 1 second before sending the next message
    delay(1000);
}
