#include "Paddle.h"

Paddle::Paddle(int x, int y, int s, int spd)
    : position(x, y), size(s), speed(spd) {}

void Paddle::moveUp() {
    position.second -= speed;
}

void Paddle::moveDown() {
    position.second += speed;
}

void Paddle::draw() const {
    // Implementación gráfica si es necesario
}
