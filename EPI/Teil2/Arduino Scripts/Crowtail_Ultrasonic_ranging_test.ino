
// include the library code:
#include <Wire.h>
#include "LiquidCrystal.h"
#include <Ultrasonic.h>
Ultrasonic ultrasonic(2,3);//Init an Ultrasonic object
// Connect via i2c, default address #0 (A0-A2 not jumpered)
LiquidCrystal lcd(0);
int Distance=0;
int Pre_Distance=0; 
void setup() {
    // set up the LCD's number of rows and columns:
    Serial.begin(9600); 
    lcd.begin(16, 2);
}

void loop()
{
     lcd.setBacklight(HIGH);
     Distance=ultrasonic.Ranging(CM);//get the current result;
     delay(100);
     if(Distance!=Pre_Distance)
     {
         lcd.clear();
         lcd.setCursor(0, 0);
         lcd.print("The distance is:");
         lcd.setCursor(5, 1);
         lcd.print(Distance);
         lcd.print("CM");
         Pre_Distance=Distance;
         Serial.println(ultrasonic.Ranging(CM));
     }
    delay(1000);
}
