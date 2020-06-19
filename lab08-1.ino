#include <Ultrasonic.h>
#include <LiquidCrystal.h>
LiquidCrystal lcd(12, 11, 5, 4, 3, 2); // initialize interface pins
Ultrasonic ultrasonic(9, 10);
int distance;

void setup() {
  Serial.begin(9600);
}

void loop() {
  // Pass INC as a parameter to get the distance in inches
  distance = ultrasonic.read();
  lcd.print(distance);
  lcd.print("CM");
  Serial.print("Distance in CM: ");
  Serial.println(distance);
  delay(1000);
  lcd.clear();
}
