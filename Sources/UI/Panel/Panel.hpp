//
//  Panel.hpp
//  ShatteredScrolls
//
//  Created by Travis Racisz on 2026/03/25.
//

#ifndef Panel_hpp
#define Panel_hpp

#include <stdio.h>
#include "Widget.hpp"
#include <vector>
#include <memory>

enum Alignment {
    Left,
    Right,
    Center,
    Top,
    Bottom,
    TopLeft,
    TopRight,
    BottomLeft,
    BottomRight,
    TopCenter,
    BottomCenter,
    None
};

class Panel : public Widget {
    
public:
    Panel(Rectangle bounds, int borderRadius, Color bgColor);
    std::vector<std::unique_ptr<Widget>> children;
    Alignment alignment = None;
    int padding = 10; // the size between the edge of the panel and its children
    int gap = 5; // the gap between its children
    int maxHeight;
    int maxWidth;
    bool isAutoHeight = true; 
    
    void render() override; 
    
};


#endif /* Panel_hpp */
