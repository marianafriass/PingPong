#ifndef PLAYERS_H
#define PLAYERS_H

#include <string>

class Players {
private:
    std::string name;
    int score;

public:
    Players(const std::string &playerName);

    void incrementScore();
    void resetScore();
    int getScore() const;
};

#endif