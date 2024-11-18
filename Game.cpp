#include "Game.h"

Game::Game() : isRunning(false) {}

void Game::startGame() {
    isRunning = true;
}

void Game::updateGame() {
    // Lógica para actualizar el estado del juego
}

void Game::endGame() {
    isRunning = false;
}

void Game::detectCollision(const Ball &ball) {
    // Lógica para detectar colisiones
}

void Game::updateScore(Players &player) {
    player.incrementScore();
}

void Game::resetGame() {
    isRunning = false;
}
