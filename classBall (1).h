#ifndef BALL_H
#define BALL_H

class Ball {
private:
    int position;
    int velocity;
    int radius;

public:
    Ball(int initPosition, int initVelocity, int initRadius);
    void move();
    void bounce();
    void reset();
};

#endif // BALL_H