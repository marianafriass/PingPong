cmake_minimum_required(VERSION 3.10)
project(untitled5)

set(CMAKE_CXX_STANDARD 20)

set(CMAKE_PREFIX_PATH "/ruta/al/directorio/de/instalacion/de/SDL2")

find_package(SDL2 REQUIRED)

add_executable(untitled5
        main.cpp
        Ball.cpp
        Paddle.cpp
        Window.cpp
        Window.h
        Paddle.h
        Ball.h
        Score.cpp
        Score.h
        Game.cpp
        Game.h
        Config.h
)

target_include_directories(untitled5 PRIVATE ${SDL2_INCLUDE_DIRS})
target_link_libraries(untitled5 PRIVATE ${SDL2_LIBRARIES})
