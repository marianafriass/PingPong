#ifndef GAME_H
#define GAME_H

#include "Ball.h"
#include "Boundary.h"
#include "Players.h"
#include "Paddle.h"

class Game {
private:
    bool isRunning;

public:
    Game();

    void startGame();
    void updateGame();
    void endGame();
    void detectCollision(const Ball &ball);
    void updateScore(Players &player);
    void resetGame();
};

#endif