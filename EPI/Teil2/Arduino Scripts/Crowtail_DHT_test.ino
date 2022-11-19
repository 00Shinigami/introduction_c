#include <DHT20.h>

DHT20  dht20;
void setup()
{
  Serial.begin(115200);
  //Initialize sensor
  while(dht20.begin())
{
    Serial.println("Initialize sensor failed");
    delay(1000);
   }
}

void loop()
{
  //Get ambient temperature
  Serial.print("temperature:"); Serial.print(dht20.getTemperature());Serial.print("C");
  //Get relative humidity
  Serial.print("  humidity:"); Serial.print(dht20.getHumidity()*100);Serial.println(" %RH");
  
  delay(1000);
}
