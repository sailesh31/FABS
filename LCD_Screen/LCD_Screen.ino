#include<LiquidCrystal.h>


const int rs = 5, en = 4, d4 = 13, d5 = 12, d6 = 11, d7 = 10;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);

void setup() {
  // put your setup code here, to run once:
lcd.begin(16,2);
//lcd.clear();
lcd.setCursor(0,0);
//digitalWrite(LCD_Display,HIGH);
lcd.print("SA");
//digitalWrite(LCD_Display,LOW);

Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
//lcd.clear();
lcd.setCursor(0,1);
lcd.print("HI");
delay(3000);

}
