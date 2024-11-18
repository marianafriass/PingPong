#ifndef PADDLE_H
#define PADDLE_H

#include <utility>

class Paddle {
private:
    std::pair<int, int> position;
    int size;
    int speed;

public:
    Paddle(int x, int y, int s, int spd);

    void moveUp();
    void moveDown();
    void draw() const; 
};

#endif
