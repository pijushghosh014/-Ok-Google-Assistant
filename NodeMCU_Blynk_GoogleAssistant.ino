
#define BLYNK_PRINT Serial


#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266_SSL.h>

// You should get Auth Token in the Blynk App.
// Go to the Project Settings (nut icon).
char auth[] = "588340eb3ca645378180f55e90b75c0e"; // Auth tokenID send by Blynk App to your mail ID when you create your perticular project  

// Your WiFi credentials.
// Set password to "" for open networks.
char ssid[] = "PIJUSH_HP6GEN"; // Put your WiFi SSID
char pass[] = "pijushhp6gen"; //Put your WiFi password

void setup()
{
  // Debug console
  Serial.begin(115200);

  Blynk.begin(auth, ssid, pass);
}

void loop()
{
  Blynk.run();
}

