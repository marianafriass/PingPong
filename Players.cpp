#include "Players.h"

Players::Players(const std::string &playerName) : name(playerName), score(0) {}

void Players::incrementScore() {
    score++;
}

void Players::resetScore() {
    score = 0;
}

int Players::getScore() const {
    return score;
}