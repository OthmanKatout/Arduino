#include<wire.h>
#include<LiquidCrystal_I2C.h>
LiquidCrystal_I2C lcd(0x27 , 16 , 2);
#defin Pin1 A0;
#defin Pin2 A;
void setup() {

lcd.begin();
lcd.backlight();

pinMode(Pin1 , INPUT);
pinMode(Pin2 , INPUT);

Serial.begin(9600);


}

void loop() {

int Val1 = analogRead(Pin1);
int Val2 = analogRead(Pin2);

lcd.print("Smoke : ");
lcd.print(Val1);
lcd.setCursor(0, 1);
lcd.print("Alcohol : ");
lcd.print(Val2);

delay(750);
lcd.clear();

}
