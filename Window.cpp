#include "Window.h"
#include <iostream>

Window::Window(const std::string& title, int width, int height)
    : sdlWindow(nullptr), sdlRenderer(nullptr), open(true) {
    if (SDL_Init(SDL_INIT_VIDEO) < 0) {
        std::cerr << "SDL could not initialize! SDL_Error: " << SDL_GetError() << std::endl;
        open = false;
        return;
    }

    sdlWindow = SDL_CreateWindow(title.c_str(), SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, width, height, SDL_WINDOW_SHOWN);
    if (!sdlWindow) {
        std::cerr << "Window could not be created! SDL_Error: " << SDL_GetError() << std::endl;
        open = false;
        return;
    }

    sdlRenderer = SDL_CreateRenderer(sdlWindow, -1, SDL_RENDERER_ACCELERATED);
    if (!sdlRenderer) {
        std::cerr << "Renderer could not be created! SDL_Error: " << SDL_GetError() << std::endl;
        open = false;
    }
}

Window::~Window() {
    if (sdlRenderer) SDL_DestroyRenderer(sdlRenderer);
    if (sdlWindow) SDL_DestroyWindow(sdlWindow);
    SDL_Quit();
}

bool Window::isOpen() const {
    return open;
}

void Window::clear() {
    SDL_SetRenderDrawColor(sdlRenderer, 0xFF, 0xFF, 0xFF, 0xFF);
    SDL_RenderClear(sdlRenderer);
}

void Window::present() {
    SDL_RenderPresent(sdlRenderer);
}

SDL_Renderer* Window::getRenderer() {
    return sdlRenderer;
}
