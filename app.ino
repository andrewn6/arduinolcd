#include <LiquidCrystal.h>
// Import liquid crystal (library for the lcd module)

// tell it the amount of interface pins on arduino

LiquidCrystal lcd(12,11,5,4,3,2);

void setup(){
  lcd.begin(16,2) // telling it the amount of spacce on the lcd (16 columns/2 rows)
  lcd.print("Hello World");
  lcd.setCursor(0,1);
  lcd.print("Wow look at this soo cool haha")
}

// main function to loop over progam

void loop(){

}
