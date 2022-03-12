#include <LiquidCrystal.h>
int Contrast = 100;
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);


char * messagePadded = "                Github -> iw4p                ";

void setup()
{
  analogWrite(6, Contrast);
  lcd.begin (16, 2);
  lcd.setCursor(2, 0);
  lcd.print("...Hello...");
}

void loop()
{
  for (int letter = 0; letter <= strlen(messagePadded) - 16; letter++) //From 0 to upto n-16 characters supply to below function
  {
    showLetters(0, letter);
  }
}

void showLetters(int printStart, int startLetter)
{
  lcd.setCursor(printStart, 1);
  for (int letter = startLetter; letter <= startLetter + 15; letter++) // Print only 16 chars in Line #2 starting 'startLetter'
  {
    lcd.print(messagePadded[letter]);
  }
  lcd.print(" ");
  delay(250);
}
