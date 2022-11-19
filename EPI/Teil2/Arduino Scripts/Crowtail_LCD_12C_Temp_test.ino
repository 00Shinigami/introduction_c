#include <Wire.h>
#include "LiquidCrystal.h"
#include "DHT.h"

#define DHTPIN 5     // what pin we're connected to
// Connect via i2c, default address #0 (A0-A2 not jumpered)
LiquidCrystal lcd(0);

#define DHTTYPE DHT11   // DHT 11 


DHT dht(DHTPIN, DHTTYPE);
void setup() {
  // set up the LCD's number of rows and columns: 
  lcd.begin(16, 2);
  // Print a message to the LCD.
  lcd.print("hello, world!");
}

void loop() {
float h = dht.readHumidity();
float t = dht.readTemperature();
// check if returns are valid, if they are NaN (not a number) then something went wrong!
if (isnan(t) || isnan(h)) {
lcd.println("Failed to read from DHT");
} else {
// set the cursor to column 0, line 0
// (note: line 1 is the second row, since counting begins with 0):
lcd.setCursor(0, 0);
lcd.print("H: ");
// print the number of fist since reset:
lcd.print(h);
lcd.print(" %");
// set the cursor to column 0, line 1
// (note: line 1 is the second row, since counting begins with 0):
lcd.setCursor(0, 1);
lcd.print("T: ");
// print the number of seconds since reset:
lcd.print(t);
lcd.print(" *C");
}
lcd.setBacklight(HIGH);
delay(1000);
}
