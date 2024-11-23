#ifndef WINDOW_H
#define WINDOW_H

#include <SDL.h>
#include <string>

class Window {
public:
    Window(const std::string& title, int width, int height);
    ~Window();

    bool isOpen() const;
    void clear();
    void present();
    SDL_Renderer* getRenderer();

private:
    SDL_Window* sdlWindow;
    SDL_Renderer* sdlRenderer;
    bool open;
};

#endif // WINDOW_H
