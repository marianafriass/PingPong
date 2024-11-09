#include "Player.h"

Player::Player(const std::string& playerName, const Paddle& playerPaddle)
    : name(playerName), score(0), paddle(playerPaddle) {}

void Player::incrementScore() {
    // Lógica para incrementar el puntaje del jugador
}

void Player::resetScore() {
    // Lógica para reiniciar el puntaje del jugador
}