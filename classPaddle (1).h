#ifndef PADDLE_H
#define PADDLE_H

class Paddle {
private:
    int position;
    int size;
    int speed;

public:
    Paddle(int initPosition, int initSize, int initSpeed);
    void moveUp();
    void moveDown();
    void draw();
};

#endif // PADDLE_H