/**
 * Blink
 *
 * Turns on an LED on for one second,
 * then off for one second, repeatedly.
 */
#include "Arduino.h"

// Set LED_BUILTIN if it is not defined by Arduino framework
// #define LED_BUILTIN 13

void setup()
{
  Serial.begin(115200);
  // initialize LED digital pin as an output.
  pinMode(LED_BUILTIN, OUTPUT);
}

void loop()
{
  // turn the LED on (HIGH is the voltage level)
  Serial.println("Hallo, schalte LED ein.. \n");
  delay(2000);
  digitalWrite(LED_BUILTIN, HIGH);
  Serial.println("LED an\n");
  // wait for a second
  delay(2000);
  Serial.println("LED aus\n");
  delay(2000);
  Serial.println("Hallo, schalte LED aus.. \n");
  // turn the LED off by making the voltage LOW
  digitalWrite(LED_BUILTIN, LOW);

   // wait for a second
  delay(1000);
}