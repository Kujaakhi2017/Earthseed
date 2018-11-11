// Used to print the final results of the game.

void showPlanetStats() {
}

void showShipStats() {
}

void showCivilization() {
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
