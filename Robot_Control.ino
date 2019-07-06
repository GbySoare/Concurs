#define BLYNK_PRINT Serial


#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>

// You should get Auth Token in the Blynk App.
// Go to the Project Settings (nut icon).
char auth[] = "0192019c7a804c2db85f821c8d893c30";

// Your WiFi credentials.
// Set password to "" for open networks.
char ssid[] = "GHot";
char pass[] = "12345678";

void setup()
{
  // Debug console
  Serial.begin(9600
  
  Blynk.begin(auth, ssid, pass);
}

void loop()
{
  Blynk.run();
}
