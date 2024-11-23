#ifndef GAME_H
#define GAME_H

#include <SDL.h>
#include "Ball.h"
#include "Paddle.h"
#include "Window.h"
#include "Score.h"
#include "Config.h"  // Incluir el archivo de configuración para las constantes

class Game {
public:
    Game(const char* title, int width, int height);
    ~Game();

    void run();

private:
    void handleEvents();
    void update();
    void render();
    void clean();

    bool isRunning;
    Window window;
    SDL_Event event;
    Ball ball;
    Paddle leftPaddle;
    Paddle rightPaddle;
    Score score;

    const int WINDOW_WIDTH;
    const int WINDOW_HEIGHT;
};

#endif // GAME_H