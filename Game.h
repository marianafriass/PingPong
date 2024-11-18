#ifndef GAME_H
#define GAME_H

#include "Ball.h"
#include "Paddle.h"
#include "Players.h"
#include "Boundary.h"

class Game {
private:
    bool isRunning;
    Ball ball1;          // Composición: La clase contiene un objeto Ball
    Paddle paddle1;      // Composición: La clase contiene un objeto Paddle
    Players player1;     // Composición: La clase contiene un objeto Players
    Boundary boundary1;  // Composición: La clase contiene un objeto Boundary

public:
    // Constructor
    Game();

    // Métodos
    void startGame();
    void updateGame();
    void endGame();
    void detectCollision(Ball ball);
    void updateScore(Players& player);
    void resetGame();
};

#endif
