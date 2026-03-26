#include "raylib.h"
#include "Grid.h"
#include "LevelEditor.h"
#include "Button.hpp"
#include "Panel.hpp"
#include <memory>
#include "Slider.hpp"


void printHello(){
    printf("Hello World");
};

int main()
{
   
    const int screenWidth  = 620;
    const int screenHeight = 380;
    Grid grid = Grid(10, 10);
    LevelEditor le = LevelEditor();
    SetConfigFlags(FLAG_WINDOW_MAXIMIZED);
    InitWindow(screenWidth, screenHeight, "raylib");                          
    SetTargetFPS(60);
    
    while (!WindowShouldClose())
    {
 
        BeginDrawing();
        ClearBackground(BLACK);
        le.drawUi();
     

        EndDrawing();
    }

    CloseWindow();
    return 0;
}



