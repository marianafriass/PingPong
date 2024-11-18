#include "Game.h"
#include "Ball.h"
#include "Paddle.h"
#include "Players.h"
#include "Boundary.h"

class Game {

private:
    bool isRunning;
    Ball ball1;
    Paddle paddle1;
    Players player1;
    Boundary boundary1;

public:
    Game() : ball1(), paddle1(), player1(), boundary1() {
        isRunning = false;
    }

    void startGame() { isRunning = true; }
    void updateGame() { /* lógica para actualizar el juego */ }
    
};

