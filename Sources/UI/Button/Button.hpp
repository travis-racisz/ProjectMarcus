//
//  Button.hpp
//  cppARPG
//
//  Created by Travis Racisz on 2026/03/25.
//

#ifndef Button_hpp
#define Button_hpp


#include "Widget.hpp"
#include <vector>
#include <functional>
#include "raylib.h"
#include <string>


class Button : public Widget{

public:
    Button(Rectangle bounds, Color bgColor, Color hoverColor);

    std::function<void(u_int32_t)> onClick;
    Color hoverColor;
    std::string label;
    Color fontColor;
    int fontSize;
    
    void render() override;
    
    
    
    
};

#endif /* Button_hpp */
