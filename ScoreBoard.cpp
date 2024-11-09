#include "ScoreBoard.h"

ScoreBoard::ScoreBoard() : scorePlayer1(0), scorePlayer2(0) {}

void ScoreBoard::updateScore(int player1Score, int player2Score) {
    scorePlayer1 = player1Score;
    scorePlayer2 = player2Score;
    // Lógica para actualizar el marcador
}

void ScoreBoard::displayScore() {
    // Lógica para mostrar el marcador
}
