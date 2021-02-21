void setup() {
  Serial.begin(38400);

  MilliSecond = millis();
  Second = millis();
  Minute = millis();
    
//setup Neo pixel
  pixels.begin(); // INITIALIZE NeoPixel strip object (REQUIRED)
  delay(2000);
  pixels.setPixelColor(0, pixels.Color(0, 0, 0));
  pixels.show(); // Set all pixel colors to 'off'
  
// Initialize the output variables as outputs
  pinMode(output5, OUTPUT);
  pinMode(output4, OUTPUT);
// Set outputs to LOW
  digitalWrite(output5, LOW);
  digitalWrite(output4, LOW);
  
// Configures static IP address
  if (!WiFi.config(local_IP, gateway, subnet, primaryDNS, secondaryDNS)) {
                                                                          Serial.println("STA Failed to configure");
                                                                         }
  
// Connect to Wi-Fi network with SSID and password
  Serial.print("Connecting to ");
  Serial.println(ssid);
  WiFi.begin(ssid, password);
  while (WiFi.status() != WL_CONNECTED) {
                                         pixels.setPixelColor(0, pixels.Color(255, 0, 255));
                                         pixels.show();
                                         delay(250);
                                         pixels.setPixelColor(0, pixels.Color(128, 0, 128));
                                         pixels.show();
                                         delay(250);
                                         wificonnect = wificonnect + 1;
                                         if(wificonnect  > 20){ESP.restart();} //restarts if wifi fails to connect
                                         Serial.print(".");
                                         }
// Print local IP address and start web server
  Serial.println("");
  Serial.println("WiFi connected.");
  Serial.println("IP address: ");
  Serial.println(WiFi.localIP());
  server.begin();
  pixels.setPixelColor(0, pixels.Color(0, 0, 0));
  pixels.show();


}
