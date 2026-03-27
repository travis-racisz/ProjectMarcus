//
//  Slider.hpp
//  ShatteredScrolls
//
//  Created by Travis Racisz on 2026/03/26.
//

#ifndef Slider_hpp
#define Slider_hpp

#include <stdio.h>
#include "raylib.h"
#include "Widget.hpp"
#include <functional>
#include <string>

class Slider : public Widget{
    
public:
    // probably makes more sense to make these values private with a getter and setter but whatever
    int minValue = 0;
    int maxValue = 100;
    int currentValue = 50;
    
    
    Color barColor;
    Color pillColor;
    float barThickness = 4.0f;
    Rectangle pillBounds = Rectangle{.x = 0, .y = 0, .width = 20, .height = 10};
    bool isDragging = false;
    Slider(Rectangle bounds, Color barColor);
    void render() override;
    std::function<void(int)> onChange;
    std::string label;
    
    
    
};


#endif /* Slider_hpp */
