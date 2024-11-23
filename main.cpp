#include "Game.h"
#include "Config.h"  // Incluir el archivo de configuración para las constantes

int main() {
    Game game("Ping Pong", WINDOW_WIDTH, WINDOW_HEIGHT);
    game.run();
    return 0;
}