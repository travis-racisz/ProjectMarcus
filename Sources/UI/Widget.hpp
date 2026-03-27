//
//  Widget.hpp
//  ShatteredScrolls
//
//  Created by Travis Racisz on 2026/03/25.
//

#ifndef Widget_hpp
#define Widget_hpp

#include <stdio.h>
#include "raylib.h"

class Widget {
    
public:
    Widget();
    
    virtual ~Widget() = default;
    virtual void render() = 0;
    
    u_int32_t id;
    int borderRadius;
    Color bgColor;
    Color fgColor;
    Color borderColor = BLACK;
    int borderSize = 4;
    Vector2 position;
    Rectangle bounds;
    int height;
    int width;
    
    
    
    
    
    
};


#endif /* Widget_hpp */
