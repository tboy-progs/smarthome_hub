#ifndef _USER_DHT_H_
#define _USER_DHT_H_

#include "DHT.h"

#define DHT_PIN 2
#define DHT_TYPE DHT22

void init_dht();
float get_temperature();
float get_humidity();

#endif