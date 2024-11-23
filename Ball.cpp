    #include "Ball.h"

Ball::Ball(int x, int y, int size, int speedX, int speedY)
    : posX(x), posY(y), velX(speedX), velY(speedY), size(size) {}

void Ball::update(int windowWidth, int windowHeight) {
    posX += velX;
    posY += velY;

    if (posY <= 0 || posY + size >= windowHeight) {
        invertVelY();
    }
}

void Ball::reset(int x, int y) {
    posX = x;
    posY = y;
}

void Ball::render(SDL_Renderer* renderer) {
    SDL_Rect ballRect = {posX, posY, size, size};
    SDL_SetRenderDrawColor(renderer, 0x00, 0x00, 0x00, 0xFF);
    SDL_RenderFillRect(renderer, &ballRect);
}

int Ball::getX() const { return posX; }
int Ball::getY() const { return posY; }
int Ball::getSize() const { return size; }

void Ball::invertVelX() { velX = -velX; }
void Ball::invertVelY() { velY = -velY; }

bool Ball::checkCollision(const Paddle& paddle) const {
    int paddleX = paddle.getX();
    int paddleY = paddle.getY();
    int paddleW = paddle.getWidth();
    int paddleH = paddle.getHeight();

    return posX < paddleX + paddleW &&
           posX + size > paddleX &&
           posY < paddleY + paddleH &&
           posY + size > paddleY;
}