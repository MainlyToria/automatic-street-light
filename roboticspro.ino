#include<LiquidCrystal.h>
int a,b,c;
LiquidCrystal lcd(7,6,5,4,3,2);

void setup() {
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  lcd.clear();
  lcd.begin(16,2);
  lcd.setCursor(1,0);
  lcd.print("STREET LIGHT");
  lcd.setCursor(1,1);
  lcd.print("PROJECT");
  delay(1000);
  lcd.clear();
  Serial.begin(9600);
}

void loop() {
  a=analogRead(A0);
  b=map(a,0,1023,0,255);
  Serial.println(b);
  if(b<220)
  {
    lcd.setCursor(1,0);
    lcd.println("NIGHT");
    digitalWrite(8, HIGH);
    delay(500);
    digitalWrite(9, HIGH);
    delay(500);
    digitalWrite(10, HIGH);
  }
  if(b>220)
  {
    lcd.setCursor(1,0);
    lcd.println("DAY");
    digitalWrite(8, LOW);
    delay(800);
    digitalWrite(9, LOW);
    delay(1000);
    digitalWrite(10, LOW);
  }

}
