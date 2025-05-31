#include "M5Stack.h"

#include "user_dht.h"

void setup()
{
  M5.begin();
  Serial.begin(115200);

  init_dht();
}

void loop()
{
  Serial.print("Temp: ");
  Serial.print(get_temperature());
  Serial.print(" Humidity: ");
  Serial.println(get_humidity());
  delay(1000);
}
