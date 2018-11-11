/*
Borrows code from LiquidCrystal Library - Hello World

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
bool pressed = false;
int mainNum = 0;
bool light1 = false, light2 = false, light3 = false, light4 = false, light5 = false;
int menuNum = 0;
bool gameOver = false;

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
  generatePlanetStats();
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
  
  //planetScan();
  //mainMenu();
  loadMenu();
  
  digitalWrite(led1,LOW);
  digitalWrite(led2,LOW);
  digitalWrite(led3,LOW);
  digitalWrite(led4,LOW);
  digitalWrite(led5,LOW);
  
  if(analogRead(button) == 0)
    pressed = false;
  if(light1)
    digitalWrite(led1, HIGH);
  if(light2)
    digitalWrite(led2, HIGH);
  if(light3)
    digitalWrite(led3, HIGH);
  if(light4)
    digitalWrite(led4, HIGH);
  if(light5)
    digitalWrite(led5, HIGH);
}

void mainMenu() {
  String option = "";
  switch(mainNum)
  {
    case 1:
      option = "Probe Planet";
      break;
    case 2:
      option = "Check Status";
      break;
    case 3:
      option = "Land";
      break;
    case 4:
      option = "Move On";
      break;
    default:
      option = "Scan Planet";
      break;
  }
  
  //Wipe away any characters left behind  
  for(int i=16-option.length(); i > 0; i--)
  {
    option += " ";
  }
  
  lcd.setCursor(0, 0);
  lcd.print(option);
  lcd.setCursor(0, 1);
  lcd.print("<  >  Enter     ");
  //int switchVal = analogRead(button);
  if(!pressed)
  {
    switch(switchToChoice())
    {
      case 1:
        mainNum--;
        if(mainNum < 0)
          mainNum = 4;
        pressed = true;
        break;
      case 2:
        mainNum++;
        if(mainNum > 4)
          mainNum = 0;
        pressed = true;
        break;
      case 3:
        menuNum = mainNum+1;
        pressed = true;
        break;
      default:
        break;
    }
  }
}

void loadMenu()
{
  switch(menuNum)
  {
    case 1:
      planetScan();
      break;
    case 3:
      shipStats();
      break;
    default:
      if(!gameOver)
        mainMenu();
      break;
  }
}