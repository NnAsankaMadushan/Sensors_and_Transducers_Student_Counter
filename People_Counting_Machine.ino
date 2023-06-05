#include<LiquidCrystal.h>
const int rs=12, en=3, d4=4, d5=5, d6=6, d7=7;
const int in=8,out=9;
int temp=0;

LiquidCrystal lcd(rs,en,d4,d5,d6,d7);

void setup(){
lcd.begin(16,2);

pinMode(in,INPUT);
pinMode(out,INPUT);
lcd.print("Student Counter");
delay(200);
}

void loop() {
if(digitalRead(in)==1)
	{
		temp=temp+1;
		lcd.clear();
		lcd.setCursor(0,0);
		lcd.print("Total Count is");
		lcd.setCursor(0,1);
		  lcd.print(temp);
		  delay(500);
	}
else if(digitalRead(out)==1)
{
	temp=temp-1;
	lcd.clear();
	  lcd.setCursor(0,0);
	    lcd.print("Total Count is");
	lcd.setCursor(0,1);
	lcd.print(temp);
	      delay(500);
}
}