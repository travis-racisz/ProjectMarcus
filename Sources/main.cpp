#include "raylib.h"
#include "Grid.h"
#include "LevelEditor.h"
#include "Button.hpp"
#include "Panel.hpp"
#include <memory>
#include "Slider.hpp"
#include "Fireball.hpp"
#include "Player.hpp"

int main()
{
   
    const int screenWidth  = 620;
    const int screenHeight = 380;
    Grid grid = Grid(10, 10);
    LevelEditor le = LevelEditor();
    SetConfigFlags(FLAG_WINDOW_MAXIMIZED);
    InitWindow(screenWidth, screenHeight, "raylib");                          
    SetTargetFPS(60);
    Texture2D emptySprite = LoadTexture("");
    Vector2 initPosition = Vector2{.x = 50, .y = 50};
    Player player = Player(emptySprite, initPosition);
    
    
    while (!WindowShouldClose())
    {
        float delta = GetFrameTime();
        BeginDrawing();
        ClearBackground(BLACK);
        le.drawUi();
        player.update(delta);
     

        EndDrawing();
    }

    CloseWindow();
    return 0;
}



