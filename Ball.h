#ifndef BALL_H
#define BALL_H

#include <utility>

class Ball {
private:
    std::pair<int, int> position;
    std::pair<int, int> velocity;
    int radius;

public:
    Ball(int x, int y, int vx, int vy, int r);

    void move();
    void bounce();
    void reset(int x, int y, int vx, int vy);
};

#endif
