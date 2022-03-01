#include <LiquidCrystal.h>
//Biblioteca do LCD

LiquidCrystal lcd (7,6,5,4,3,2);
//Pinos onde está ligado o LCD

int sensorT = 0;
int ADClido = 0;
float temp = 0;

void setup()
{
  lcd.begin (16,2);
  lcd.setCursor (0,0);
  lcd.print ("SENAI Automacao");
  
  lcd.setCursor (3,1);
  lcd.print ("Aguarde...");
  delay (2000);
}

void loop()
{ 
  ADClido = analogRead (sensorT);
  temp = ADClido * 0.1075268817204301;
      
  lcd.clear ();
  lcd.setCursor (0,0);
  lcd.print ("Temp: ");
  lcd.setCursor (6,0);
  lcd.print (temp);
  lcd.setCursor (10,0);
  lcd.print (" C");
  delay (300);
}
