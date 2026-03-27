//
//  Slider.cpp
//  ShatteredScrolls
//
//  Created by Travis Racisz on 2026/03/26.
//

#include "Slider.hpp"
#include "raylib.h"
#include "raymath.h"

Slider::Slider(Rectangle bounds, Color barColor){
    this->bounds = bounds;
    this->barColor = barColor;
    // pillBounds.x is always derived from currentValue in render()
}

void Slider::render(){
    float minX = this->bounds.x;
    float maxX = this->bounds.x + this->bounds.width - pillBounds.width;

    // keep pill vertically centered every frame
    pillBounds.y = this->bounds.y + (this->bounds.height / 2) - (pillBounds.height / 2);

    // latch drag on — only requires hovering the pill on initial press
    if (CheckCollisionPointRec(GetMousePosition(), pillBounds) && IsMouseButtonPressed(MOUSE_BUTTON_LEFT)) {
        isDragging = true;
    }
    // release drag when mouse is let go
    if (IsMouseButtonReleased(MOUSE_BUTTON_LEFT)) {
        isDragging = false;
    }

    // when dragging, update currentValue from mouse — pill position derives from this below
    if (isDragging && maxX > minX) {
        float clampedX = Clamp(GetMousePosition().x - pillBounds.width / 2, minX, maxX);
        float t = (clampedX - minX) / (maxX - minX);
        int newValue = (int)(minValue + t * (maxValue - minValue));
        if (newValue != currentValue) {
            currentValue = newValue;
            if (onChange) onChange(currentValue);
        }
    }

    // always derive pill X from currentValue and current bounds.x
    // this means panel offsets are automatically respected every frame, that was an annoying bug lmao 
    if (maxX > minX) {
        float t = (float)(currentValue - minValue) / (float)(maxValue - minValue);
        pillBounds.x = minX + t * (maxX - minX);
    } else {
        pillBounds.x = minX;
    }

    // draw bar
    float centerY = this->bounds.y + (this->bounds.height / 2);
    DrawLineEx(
        Vector2{.x = this->bounds.x,                      .y = centerY},
        Vector2{.x = this->bounds.x + this->bounds.width, .y = centerY},
        this->barThickness,
        this->barColor
    );

    // draw pill
    DrawRectangleRounded(pillBounds, 1, 12, pillColor);
    int textlength = TextLength(this -> label.data());
    DrawText(this -> label.data(), bounds.x + textlength, bounds.y - 15, 12, WHITE);
}


