// Used to print the final results of the game.

void showPlanetStats() {
    
}

void showShipStats() {
    
}

void showCivilization() {
    lcd.setCursor(0,0);
    lce.print(civReading);
}

void showScore(int colonists, int scientific, int cultural, int resources, int civilization) {
    int score = colonists + scientific + cultural;
    score += scientific*100;
    score += cultural*100;
    score += resources*100;
    score += civilization*100;

    lcd.setCursor(0,0);
    String output = "Score: " + score;
    lcd.print(output);
}

void endStats() {
  if(!pressed)
  {
    switch(switchToChoice())
    {
      case 1:
        statNum--;
        if(statNum < 0)
          statNum = 12;
        pressed = true;
        break;
      case 2:
        statNum++;
        if(statNum > 12)
          statNum = 0;
        pressed = true;
        break;
      case 5:
        // todo: call scan planet function
        menuNum = 0;
        pressed = true;
        break;
      default:
        break;
    }
  }
}
