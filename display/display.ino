#include <LiquidCrystal.h>
LiquidCrystal lcd(8,9,4,5,6,7);
unsigned long segundos=0,minutos=0,horas=0,aux=0;

void setup() 
{
  lcd.begin(16,2);
}
int i=0;
void loop() 
{
  aux=millis();
  aux/=1;
  segundos=aux%60;
  minutos=(aux/60)%60;
  horas=aux/3600;
  
  lcd.setCursor(0,0);
  segundos=millis();
  lcd.print(segundos/1000);

    if(segundos<10)
    {
      lcd.print("0");
    }
    lcd.print(segundos);
    delay(1000);

    if(minutos<10)
    {
      lcd.print("0");
      
    }
    lcd.print(minutos);
    lcd.print(":");
}
