#include "Game.h"
#include "Config.h"  // Incluir el archivo de configuración para las constantes

Game::Game(const char* title, int width, int height)
    : window(title, width, height),
      ball(width / 2, height / 2, BALL_SIZE, BALL_SPEED, BALL_SPEED),
      leftPaddle(0, (height - PADDLE_HEIGHT) / 2, PADDLE_WIDTH, PADDLE_HEIGHT, PADDLE_SPEED),
      rightPaddle(width - PADDLE_WIDTH, (height - PADDLE_HEIGHT) / 2, PADDLE_WIDTH, PADDLE_HEIGHT, PADDLE_SPEED),
      score(width / 2, 50),
      isRunning(true),
      WINDOW_WIDTH(width),
      WINDOW_HEIGHT(height) {}

Game::~Game() {
    clean();
}

void Game::run() {
    while (isRunning) {
        handleEvents();
        update();
        render();
        SDL_Delay(16);
    }
}

void Game::handleEvents() {
    while (SDL_PollEvent(&event)) {
        if (event.type == SDL_QUIT) {
            isRunning = false;
        }

        if (event.type == SDL_KEYDOWN && event.key.repeat == 0) {
            switch (event.key.keysym.sym) {
                case SDLK_w: leftPaddle.setVelocity(-PADDLE_SPEED); break;
                case SDLK_s: leftPaddle.setVelocity(PADDLE_SPEED); break;
                case SDLK_UP: rightPaddle.setVelocity(-PADDLE_SPEED); break;
                case SDLK_DOWN: rightPaddle.setVelocity(PADDLE_SPEED); break;
            }
        } else if (event.type == SDL_KEYUP && event.key.repeat == 0) {
            switch (event.key.keysym.sym) {
                case SDLK_w: leftPaddle.setVelocity(0); break;
                case SDLK_s: leftPaddle.setVelocity(0); break;
                case SDLK_UP: rightPaddle.setVelocity(0); break;
                case SDLK_DOWN: rightPaddle.setVelocity(0); break;
            }
        }
    }
}

void Game::update() {
    leftPaddle.update(WINDOW_HEIGHT);
    rightPaddle.update(WINDOW_HEIGHT);
    ball.update(WINDOW_WIDTH, WINDOW_HEIGHT);

    if (ball.checkCollision(leftPaddle)) {
        ball.invertVelX();
    } else if (ball.checkCollision(rightPaddle)) {
        ball.invertVelX();
    } else if (ball.getX() < 0) {
        score.incrementRight();
        ball.reset(WINDOW_WIDTH / 2, WINDOW_HEIGHT / 2);
    } else if (ball.getX() + ball.getSize() > WINDOW_WIDTH) {
        score.incrementLeft();
        ball.reset(WINDOW_WIDTH / 2, WINDOW_HEIGHT / 2);
    }
}

void Game::render() {
    window.clear();
    leftPaddle.render(window.getRenderer());
    rightPaddle.render(window.getRenderer());
    ball.render(window.getRenderer());
    score.render(window.getRenderer());
    window.present();
}

void Game::clean() {
    SDL_Quit();
}