#include <Arduino.h>
#include <Adafruit_Sensor.h>
#include <DHT.h>

#define DHTPIN 5

#define DHTTYPE DHT11

DHT dht(DHTPIN, DHTTYPE);

void setup() {
  Serial.begin(115200);
  dht.begin();

}

void loop() {

  float temperature = dht.readTemperature();
  float humidity = dht.readHumidity();

  if(isnan(temperature) || isnan(humidity)) {
    Serial.println("Fehler beim Auslesen der Temperatur oder der Luftfeuchtigkeit!");
    return; 
  } 

  Serial.print("Temperatur: ");
  Serial.print(temperature);
  Serial.print("°C Luftfeuchtigkeit: ");
  Serial.print(humidity);
  Serial.println("%");

  delay(1000);
}