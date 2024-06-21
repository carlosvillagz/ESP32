#include <WiFi.h>

// Replace these with your network credentials
const char* ssid     = "BambuH";
const char* password = "bambu20161";

void setup() {
  Serial.begin(115200);
  
  // Begin the Wi-Fi connection process
  WiFi.begin(ssid, password);
  Serial.println("Connecting to WiFi...");

  // Wait until the ESP32 is connected to the Wi-Fi network
  while (WiFi.status() != WL_CONNECTED) {
    delay(1000);
    Serial.println("Connecting...");
  }

  // Print the IP address once connected
  Serial.println("Connected to WiFi");
  Serial.println("IP address: ");
  Serial.println(WiFi.localIP());
}

void loop() {
Serial.println("Estado: conectado al wifi");
}