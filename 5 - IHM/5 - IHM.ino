#include <LiquidCrystal.h>

LiquidCrystal lcd (7,6,5,4,3,2);

int temp = 0;

void setup()
{
  lcd.begin (16,2);
  lcd.setCursor (0,0);
  lcd.print ("SENAI Automacao");
  delay(100);
  
  lcd.setCursor (3,1);
  lcd.print ("Aguarde...");
  delay (900);
}

void loop()
{
  lcd.clear();
  
  lcd. setCursor (0,0);
  lcd.print ("IHM inicializada");
  delay (300);
  
  lcd.setCursor (0,1);
  lcd.print ("-");
  delay (300);
  
  lcd.setCursor (0,1);
  lcd.print ("|");
  delay (300);
  
  lcd.setCursor (0,1);
  lcd.print ("-");
  delay (300);
  
  lcd.setCursor (0,1);
  lcd.print ("|");
  delay (300);
}