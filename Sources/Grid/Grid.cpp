//
//  Grid.cpp
//  ShatteredScrolls
//
//  Created by Travis Racisz on 2026/03/24.
//

#include "Grid.h"
#include "raylib.h"


        void Grid::drawGrid(){
            // draw from x -> screen width
            // draw from y -> screen height
            for (int i = 0; i < this -> getWidth(); ++i){
                DrawLine(0, i * 10, GetScreenWidth(), i * 10, WHITE);
            }
        }

