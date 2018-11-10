/*
  LiquidCrystal Library - Hello World

 Demonstrates the use a 16x2 LCD display.  The LiquidCrystal
 library works with all LCD displays that are compatible with the
 Hitachi HD44780 driver. There are many of them out there, and you
 can usually tell them by the 16-pin interface.

 This sketch prints "Hello World!" to the LCD
 and shows the time.

  The circuit:
 * LCD RS pin to digital pin 12
 * LCD Enable pin to digital pin 11
 * LCD D4 pin to digital pin 5
 * LCD D5 pin to digital pin 4
 * LCD D6 pin to digital pin 3
 * LCD D7 pin to digital pin 2
 * LCD R/W pin to ground
 * LCD VSS pin to ground
 * LCD VCC pin to 5V
 * 10K resistor:
 * ends to +5V and ground
 * wiper to LCD VO pin (pin 3)

 Library originally added 18 Apr 2008
 by David A. Mellis
 library modified 5 Jul 2009
 by Limor Fried (http://www.ladyada.net)
 example added 9 Jul 2009
 by Tom Igoe
 modified 22 Nov 2010
 by Tom Igoe
 modified 7 Nov 2016
 by Arturo Guadalupi

 This example code is in the public domain.

 http://www.arduino.cc/en/Tutorial/LiquidCrystalHelloWorld

*/

// include the library code:
#include <LiquidCrystal.h>

// initialize the library by associating any needed LCD interface pin
// with the arduino pin number it is connected to
const int rs = 12, en = 11, d4 = 5, d5 = 4, d6 = 3, d7 = 2;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);

const int led1 = 6, led2 = 7, led3 = 8, led4 = 9, led5 = 10;
const int button = A6;

// Variables
// Which ship stat to view
int statNum = 0;
bool pressed = false;

int switchToChoice()
{
  //Serial.write(switchVal);
  int switchVal = analogRead(button);
  if(switchVal > 5 && switchVal < 11)
    return 5;
  else if(switchVal > 14 && switchVal < 21)
    return 4;
  else if(switchVal > 44 && switchVal < 50)
    return 3;
  else if(switchVal > 89 && switchVal < 95)
    return 2;
  else if(switchVal > 234 && switchVal < 241)
    return 1;
    
  return 0;
}

void makeChoice(int choice)
{
  switch(choice)
  {
    case 1:
      digitalWrite(led1,HIGH);
      break;
    case 2:
      digitalWrite(led2,HIGH);
      break;
    case 3:
      digitalWrite(led3,HIGH);
      break;
    case 4:
      digitalWrite(led4,HIGH);
      break;
    case 5:
      digitalWrite(led5,HIGH);
      break;
    default:
      digitalWrite(led1,LOW);
      digitalWrite(led2,LOW);
      digitalWrite(led3,LOW);
      digitalWrite(led4,LOW);
      digitalWrite(led5,LOW);
      break;
  }
}

void setup() {
  // set up LED pins
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  pinMode(led4, OUTPUT);
  pinMode(led5, OUTPUT);
  // set up the LCD's number of columns and rows:
  lcd.begin(16, 2);
  Serial.begin(9600);
  // Start with stat screen
  //shipStats();
}

void loop() {
  //int switchVal = analogRead(A6);
  // set the cursor to column 0, line 1
  // (note: line 1 is the second row, since counting begins with 0):
  //lcd.setCursor(0, 1);
  //if(switchVal == 0)
  //  lcd.print("0   ");
  //else
  //  lcd.print(switchVal);
  //int choice = switchToChoice();
  //makeChoice(choice);
  shipStats();
  if(analogRead(button) == 0)
    pressed = false;
}