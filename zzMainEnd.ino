// Used to print the final results of the game.
int endNum = 0;
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
        endNum--;
        if(endNum < 3)
          endNum = 12;
        pressed = true;
        break;
      case 2:
        endNum++;
        if(endNum > 12)
          endNum = 0;
        pressed = true;
        break;
      case 3:
        endNum = 0;
        pressed = true;
        break;
      default:
        showScore();
        break;
    }
  }
}
