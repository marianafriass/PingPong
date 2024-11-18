#include "GameObject.h"

// Constructor que inicializa la posición
GameObject::GameObject(int x, int y) : position(x, y) {}

// Devuelve la posición del objeto
std::pair<int, int> GameObject::getPosition() const {
    return position;
}

// Establece una nueva posición para el objeto
void GameObject::setPosition(int x, int y) {
    position = {x, y};
}
