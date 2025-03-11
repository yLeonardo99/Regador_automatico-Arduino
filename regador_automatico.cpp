// C++ code

/* AUTOR:   Leonardo Cassiano
   PROJETO: Regador Automatizado
   DATA:    27/09/2023
   V.1.0
*/

#include <LiquidCrystal_I2C.h>
#define Umidade A0
#define Temp   A1
#define rele   8
int    memo_Umi;
int    memo_Temp;

LiquidCrystal_I2C lcd(0x20,16,2);

void setup()
{

  lcd.init();
  lcd.backlight();
  lcd.clear();
  lcd.setCursor(0,0);
  lcd.print("Umi.=");
  lcd.setCursor(0,1);
  lcd.print("Temp. = ");
  Serial.begin(9600);
  pinMode(rele,OUTPUT);
}

void loop()
{
  // min 0 max 876 -> min 0% max 100%
  memo_Umi = map(memo_Umi, 0,876,0,100);
  memo_Umi = analogRead(Umidade);
  Serial.print("umi = ");
  Serial.println(memo_Umi);
  lcd.setCursor(7,0); // 7 coluna linha 0
  lcd.print(memo_Umi);
  lcd.print(" %");
  
  memo_Temp = analogRead(Temp);
  // min 20 max 358 -> 0ºC      a 80ºC
  memo_Temp = map(memo_Temp,20,358,0,80);
  Serial.print("temp = ");
  Serial.println(memo_Temp);
  lcd.setCursor(7,1); // 7 coluna linha 0
  lcd.print(memo_Temp);
  lcd.print(" ");
  
  if((memo_Umi>20)||(memo_Temp>35)) {
    digitalWrite(rele,HIGH);
    if(memo_Umi<20)  lcd.setCursor(12,0);
    else             lcd.setCursor(12,1);
    lcd.print("AGUA");
    delay(3000);
    lcd.setCursor(12,0);
    lcd.print("    ");
    lcd.setCursor(12,1);
    lcd.print("    ");
    digitalWrite(rele,LOW);
 }
 delay(500);
}
