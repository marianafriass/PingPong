    #ifndef BALL_H
#define BALL_H

#include <SDL.h>
#include "Paddle.h" // Incluye el encabezado de Paddle para poder usar la clase Paddle

class Ball {
public:
    Ball(int x, int y, int size, int speedX, int speedY);

    void update(int windowWidth, int windowHeight);
    void reset(int x, int y);
    void render(SDL_Renderer* renderer);

    int getX() const;
    int getY() const;
    int getSize() const;
    void invertVelX();
    void invertVelY();
    bool checkCollision(const Paddle& paddle) const; // Nueva función para comprobar colisiones

private:
    int posX, posY;
    int velX, velY;
    int size;
};

#endif // BALL_H