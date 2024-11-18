#ifndef GAMEOBJECT_H
#define GAMEOBJECT_H

#include <utility> 

class GameObject {
protected:
    std::pair<int, int> position; // Posición x, y

public:
    GameObject(int x = 0, int y = 0) : position(x, y) {}
    virtual ~GameObject() = default;

    std::pair<int, int> getPosition() const { return position; }
    void setPosition(int x, int y) { position = {x, y}; }

 
    virtual void move() = 0;
};

#endif 