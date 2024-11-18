#include "Game.h"

// Constructor
Game::Game() : ball1(), paddle1(), player1(), boundary1() {
    isRunning = false;
}

// Inicia el juego
void Game::startGame() {
    isRunning = true;
}

// Actualiza estado del juego
void Game::updateGame() {
    // Para mover la pelota, verificar colisiones, etc.
}

// Finaliza el juego
void Game::endGame() {
    isRunning = false;
}

// Detecta colisiones con la pelota
void Game::detectCollision(Ball ball) {
    // Colisiones entre la pelota y el paddle o las paredes
}

// Actualiza el puntaje de un jugador
void Game::updateScore(Players& player) {
    player.incrementScore();
}

// Reinicia el juego
void Game::resetGame() {
    isRunning = false;
    ball1.reset();
    player1.resetScore();
}

