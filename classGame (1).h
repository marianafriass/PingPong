#ifndef GAME_H
#define GAME_H

class Game {
private:
    int scorePlayer1;
    int scorePlayer2;
    bool isRunning;

public:
    Game();
    void startGame();
    void updateGame();
    void endGame();
};

#endif // GAME_H