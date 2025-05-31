#include "user_dht.h"

DHT dht(DHT_PIN, DHT_TYPE);

void init_dht()
{
    dht.begin();
}

float get_temperature()
{
    return dht.readTemperature();
}

float get_humidity()
{
    return dht.readHumidity();
}