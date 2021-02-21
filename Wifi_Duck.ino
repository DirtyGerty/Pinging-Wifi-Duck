/*
 * This Sketch is intended for a esp8266 wemos with a single neopixel LED connected to D2
 * The intention is to ping network devices in decending order of importance 
 * from Device 1 to Device 4 . ie If device 1 and 2 fail , device 1 gets priority and that colour is indicated
 * Green indicates all devices active, Purple is wifi connection , the colours there after are determined in Ledupdate
 * In this sketch the HTML is NOT implemented yet , it will at a later stage
 */

// Load Wi-Fi library
#include <ESP8266WiFi.h>
#include <ESP8266Ping.h>
#include <Adafruit_NeoPixel.h>

//------------------------------------Network and test Parameters--------------------------------
// Setup your network credentials
   const char* ssid     = "AndroidAP";
   const char* password = "pomb1234";
   unsigned int wificonnect = 0;

// Set your Static IP address
   IPAddress local_IP(192, 168, 1, 254); //your ducks fixed IP it must be fixed so if DHCP isnt available it still works
   IPAddress gateway(192, 168, 1, 1);
   IPAddress subnet(255, 255, 255, 0);
   IPAddress primaryDNS(192, 168, 1, 2);   //optional
   IPAddress secondaryDNS(192, 168, 1, 3); //optional

// Ping Device Parameters - Device 1 is most priority and 4 is the least 
   const IPAddress remote_ip1(192, 168, 1, 1);//Network Device 1  Wifi Ap
   const IPAddress remote_ip2(192, 168, 1, 2);//Network Device 2  Router
   const IPAddress remote_ip3(192, 168, 1, 3);//Network Device 3  Wifi Extender
   const IPAddress remote_ip4(142, 250, 70, 228);//External Network Device 1 use your providers DNS or google etc

   String ip1_Name = ("Network Device 1 ");
   String ip2_Name = ("Network Device 2 ");
   String ip3_Name = ("Network Device 3 ");
   String ip4_Name = ("Network Device 4 ");

   unsigned int Internal_PingCounter = 8; //Set the same as Internal_Ping_Delay
   unsigned int External_PingCounter = 0;  //Set the same as External_Ping_Delay
   const unsigned int Internal_Ping_Delay = 15; //Number of Seconds between internal network test
   const unsigned int External_Ping_Delay = 35; //Number of Seconds between External network test

//------------------------------------End of Network and test Parameters--------------------------------

bool ip1_Status = true;
bool ip2_Status  = true;
bool ip3_Status  = true;
bool ip4_Status  = true;
bool Brightness_Dir = false;
unsigned long Brightness = 253;

// Timers
unsigned long MilliSecond;
unsigned long Second; 
unsigned long Minute;


   
// Set web server port number to 80
WiFiServer server(80);

// Variable to store the HTTP request
String header;

// Auxiliar variables to store the current output state
String output5State = "off";
String output4State = "off";

// Assign output variables to GPIO pins
const int output5 = 5;
const int output4 = 4;

// Current time
unsigned long currentTime = millis();
// Previous time
unsigned long previousTime = 0; 
// Define timeout time in milliseconds (example: 2000ms = 2s)
const long timeoutTime = 2000;



//Define NEOPIXEL
#define PIN        D2 // NeoPixel Pin
#define NUMPIXELS 1

Adafruit_NeoPixel pixels(NUMPIXELS, PIN, NEO_GRB + NEO_KHZ800);

unsigned int LEDColour = 1;
