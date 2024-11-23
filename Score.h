#ifndef SCORE_H
#define SCORE_H

#include <SDL.h>

class Score {
public:
    Score(int x, int y);

    void incrementLeft();
    void incrementRight();
    void render(SDL_Renderer* renderer);

private:
    int leftScore;
    int rightScore;
    int posX, posY;

    void renderDigit(int num, int x, int y, SDL_Renderer* renderer);
    void renderSegment(int x, int y, int length, bool horizontal, SDL_Renderer* renderer);
};

#endif // SCORE_H
