#ifndef PADDLE_H
#define PADDLE_H

#include "GameObject.h"

class Paddle : public GameObject {
private:
    int size;
    int speed;

public:
    Paddle(int x, int y, int s, int sp) 
        : GameObject(x, y), size(s), speed(sp) {}

    void moveUp() { position.second -= speed; }
    void moveDown() { position.second += speed; }

    void move() override {
    }
};

#endif 
