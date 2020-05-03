#include <LiquidCrystal.h>


int rs_pin = 3;
int e_pin = 4;
int d4_pin = 5;
int d5_pin = 6;
int d6_pin = 7;
int d7_pin = 8;

LiquidCrystal LCD(rs_pin, e_pin, d4_pin, d5_pin, d6_pin, d7_pin);

void setup() 
{
  LCD.begin(16,2);
  LCD.setCursor(0,0)   // initialize digital pin LED_BUILTIN as an output.
  pinMode(2, OUTPUT);
}

// the loop function runs over and over again forever
void loop() 
{
  LCD.print("ble");
  digitalWrite(2, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(1000);                       // wait for a second
  digitalWrite(2, LOW);    // turn the LED off by making the voltage LOW
  delay(1000);                       // wait for a second
}
