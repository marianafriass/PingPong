#include "Ball.h"

Ball::Ball(int x, int y, int vx, int vy, int r)
    : position(x, y), velocity(vx, vy), radius(r) {}

void Ball::move() {
    position.first += velocity.first;
    position.second += velocity.second;
}

void Ball::bounce() {
    velocity.first = -velocity.first;
    velocity.second = -velocity.second;
}

void Ball::reset(int x, int y, int vx, int vy) {
    position = {x, y};
    velocity = {vx, vy};
}