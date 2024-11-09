#ifndef SCOREBOARD_H
#define SCOREBOARD_H

class ScoreBoard {
private:
    int scorePlayer1;
    int scorePlayer2;

public:
    ScoreBoard();
    void updateScore(int player1Score, int player2Score);
    void displayScore();
};

#endif // SCOREBOARD_H