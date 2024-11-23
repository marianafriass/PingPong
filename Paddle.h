#ifndef PADDLE_H
#define PADDLE_H

#include <SDL.h>

class Paddle {
public:
    Paddle(int x, int y, int width, int height, int speed);

    void update(int windowHeight);
    void setVelocity(int velocity);
    void render(SDL_Renderer* renderer);

    int getX() const;
    int getY() const;
    int getWidth() const;
    int getHeight() const;

private:
    int posX, posY;
    int velY;
    int width, height;
    int speed;
};

#endif // PADDLE_H
