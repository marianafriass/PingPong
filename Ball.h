#ifndef BALL_H
#define BALL_H

#include "GameObject.h"

class Ball : public GameObject {
private:
    std::pair<int, int> velocity; // Velocidad x, y
    int radius;

public:
    Ball(int x, int y, int vx, int vy, int r) 
        : GameObject(x, y), velocity(vx, vy), radius(r) {}

    // Métodos específicos de Ball
    void move() override {
        position.first += velocity.first;
        position.second += velocity.second;
    }

    void bounce() {
        velocity.first = -velocity.first;
        velocity.second = -velocity.second;
    }

    void reset(int x, int y) {
        position = {x, y};
        velocity = {0, 0};
    }
};

#endif 
