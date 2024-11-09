#ifndef PLAYER_H
#define PLAYER_H

#include <string>
#include "Paddle.h"

class Player {
private:
    std::string name;
    int score;
    Paddle paddle;

public:
    Player(const std::string& playerName, const Paddle& playerPaddle);
    void incrementScore();
    void resetScore();
};

#endif // PLAYER_H