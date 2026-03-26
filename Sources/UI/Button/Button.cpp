//
//  Button.cpp
//  cppARPG
//
//  Created by Travis Racisz on 2026/03/25.
//

#include "Button.hpp"
#include <print>

Button::Button(Rectangle bounds, Color bgColor, Color hoverColor){
    // constructor
    this -> bounds = bounds;
    this -> bgColor = bgColor;
    this -> hoverColor = hoverColor; 
    
};


void Button::render(){
    
    int textLength = TextLength(this -> label.data());

    
    
    if(CheckCollisionPointRec(GetMousePosition(), this -> bounds)){
        
        DrawRectangleRounded(this -> bounds, 0.25f, 12, this -> hoverColor);
        if(IsMouseButtonPressed(MOUSE_LEFT_BUTTON)){
            onClick(this -> id);
        }
    } else {
        DrawRectangleRounded(this -> bounds, 0.5f, 12, this -> bgColor);
    }
    DrawText(this -> label.data(), this -> bounds.x + (textLength), this -> bounds.y + (this -> bounds.height / 2), this -> fontSize, this -> fontColor);
    
    
};


