String endCiv = "";
int Score;
bool alive = true;

void endGame()
{
  // Check if we're still alive, or if everyone died in agony
  if(!gameOver)
  {
    gameOver = true;
    if(planet_Temp > 300)
      alive = false;
    else if(planet_Temp > 120 && ((construction < 50 && supplies < 25) || construction < 25))
      alive = false;
    else if(planet_Temp < 0 && construction < 25)
      alive = false;
    else if(planet_Resources < 2)
      alive = false;
    else if(planet_Gravity > 3)
      alive = false;
    else if((planet_Water < 1 && construction < 25) || (planet_Water < 1 && construction < 50 && supplies < 25))
      alive = false;
    else if((planet_Atmosphere != 2 && construction < 25) || (planet_Atmosphere != 2 && construction < 50 && supplies < 25))
      alive = false;
  }
  
  //Let the player know if they lived or died
  lcd.setCursor(0,1);
  lcd.print("                ");
  lcd.setCursor(0,0);
  if(alive)
    lcd.print("COLONY SUCCESS! ");
  else
    lcd.print("EVERYBODY DIED! ");
  
}