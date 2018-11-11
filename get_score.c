int getScore(int colonists, int scientific, int cultural, int resources, int civilization) {
    int score = colonists + scientific + cultural;
    score += scientific*100;
    score += cultural*100;
    score += resources*100;
    score += civilization*100;

    return score;
}
