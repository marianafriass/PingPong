   #include "Score.h"
   #include <SDL.h>
   #include <string>
   #include <array>
   #include <cmath>

   Score::Score(int x, int y)
       : leftScore(0), rightScore(0), posX(x), posY(y) {}

   void Score::incrementLeft() {
       leftScore++;
   }

   void Score::incrementRight() {
       rightScore++;
   }

   void Score::render(SDL_Renderer* renderer) {
       // Dibujar los dígitos del puntaje izquierdo y derecho
       renderDigit(leftScore, posX - 50, posY, renderer);
       renderDigit(rightScore, posX + 50, posY, renderer);
   }

   void Score::renderDigit(int num, int x, int y, SDL_Renderer* renderer) {
       // Mapear cada número al patrón de segmentos activados
       std::array<std::array<int, 7>, 10> digits = {{
           {1, 1, 1, 1, 1, 1, 0}, // 0
           {0, 1, 1, 0, 0, 0, 0}, // 1
           {1, 1, 0, 1, 1, 0, 1}, // 2
           {1, 1, 1, 1, 0, 0, 1}, // 3
           {0, 1, 1, 0, 0, 1, 1}, // 4
           {1, 0, 1, 1, 0, 1, 1}, // 5
           {1, 0, 1, 1, 1, 1, 1}, // 6
           {1, 1, 1, 0, 0, 0, 0}, // 7
           {1, 1, 1, 1, 1, 1, 1}, // 8
           {1, 1, 1, 1, 0, 1, 1}  // 9
       }};

       int length = 10;  // Longitud de cada segmento
       int thickness = 2; // Grosor de cada segmento

       // Segmentos de 0 a 6, como en un display de siete segmentos
       std::array<SDL_Point, 7> segmentPositions = {{
           {x +  1, y}, // Segmento A
           {x + length + 1, y +  1}, // Segmento B
           {x + length + 1, y + length + 1}, // Segmento C
           {x +  1, y + 2 * length + 2}, // Segmento D
           {x, y + length + 1}, // Segmento E
           {x, y +  1}, // Segment F
           {x +  1, y + length + 1}  // Segmento G
       }};

       for (int i = 0; i < 7; i++) {
           if (digits[num % 10][i] == 1) {
               renderSegment(segmentPositions[i].x, segmentPositions[i].y, length, i == 0 || i == 3 || i == 6, renderer);
           }
       }
   }

   void Score::renderSegment(int x, int y, int length, bool horizontal, SDL_Renderer* renderer) {
       int thickness = 2; // Asegurarse de declarar thickness aquí
       SDL_Rect rect;
       if (horizontal) {
           rect = { x, y, length, thickness };
       } else {
           rect = { x, y, thickness, length };
       }
       SDL_SetRenderDrawColor(renderer, 0, 0, 0, 255); // Color negro
       SDL_RenderFillRect(renderer, &rect);
   }