#include "Paddle.h"

Paddle::Paddle(int x, int y, int width, int height, int speed)
    : posX(x), posY(y), velY(0), width(width), height(height), speed(speed) {}

void Paddle::update(int windowHeight) {
    posY += velY;

    if (posY < 0) posY = 0;
    if (posY + height > windowHeight) posY = windowHeight - height;
}

void Paddle::setVelocity(int velocity) {
    velY = velocity;
}

void Paddle::render(SDL_Renderer* renderer) {
    SDL_Rect paddleRect = {posX, posY, width, height};
    SDL_SetRenderDrawColor(renderer, 0x00, 0x00, 0x00, 0xFF);
    SDL_RenderFillRect(renderer, &paddleRect);
}

int Paddle::getX() const { return posX; }
int Paddle::getY() const { return posY; }
int Paddle::getWidth() const { return width; }
int Paddle::getHeight() const { return height; }