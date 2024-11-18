#ifndef BOUNDARY_H
#define BOUNDARY_H

#include "Ball.h"

class Boundary {
private:
    int width;
    int height;

public:
    Boundary(int w, int h);

    bool checkCollision(const Ball &ball) const;
};

#endif
