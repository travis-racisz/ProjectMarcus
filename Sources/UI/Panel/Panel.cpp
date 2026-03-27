//
//  Panel.cpp
//  ShatteredScrolls
//
//  Created by Travis Racisz on 2026/03/25.
//

#include "Panel.hpp"

//TODO: experiement with Triangle Fan and Triangle strip for drawing this panel
//      this will allow for rounded corners and drop shadow. can also maybe implement this
//      in the base widget class as a render method for all shapes. something to think about...


Panel::Panel(Rectangle bounds, int borderRadius, Color bgColor){
    this -> bounds = bounds;
    this -> borderRadius = borderRadius;
    this -> bgColor = bgColor;
    
}

void Panel::render(){

    // set the panels position based on its alignment property
    switch (this -> alignment) {
        case None:
            break;
        case Left:
            this -> bounds.x = 0;
            break;
        case Right:
            this -> bounds.x = GetScreenWidth() - this -> bounds.width;
            break;
        case Center:
            this -> bounds.x = (GetScreenWidth() / 2) - (this -> bounds.width / 2);
            break;
        case TopLeft:
            this -> bounds.x = 0;
            this -> bounds.y = 0;
            break;
        case TopRight:
            this -> bounds.x = GetScreenWidth() - this -> bounds.width;
            this -> bounds.y = 0;
            break;
        case BottomLeft:
            this ->bounds.x = 0;
            this -> bounds.y = GetScreenHeight() - this -> bounds.height;
            break;
        case BottomRight:
            this -> bounds.x = GetScreenWidth() - this -> bounds.width;
            this -> bounds.y = GetScreenHeight() - this -> bounds.height;
            break;
        case TopCenter:
            this -> bounds.x = (GetScreenWidth() / 2) - (this -> bounds.width / 2);
            this -> bounds.y = 0;
            break;
        case BottomCenter:
            this -> bounds.x = (GetScreenWidth() / 2) - (this -> bounds.width / 2);
            this -> bounds.y = (GetScreenHeight() - this -> bounds.y);
            break;
        default:
            break;
    }
    DrawRectangleRounded(this -> bounds, 0.25f, 12, this -> bgColor);
    DrawRectangleRoundedLinesEx(this -> bounds, 0.25f, 12, this -> borderSize, this -> borderColor);

    // grid layout cursor — tracks where the next child should be placed
    float maxWidth = this -> bounds.x + this -> bounds.width - this -> padding;
    float cursorX = this -> bounds.x + this -> padding;
    float cursorY = this -> bounds.y + this -> padding;
    float rowHeight = 0;

    for (auto& child : this -> children){
        
        // if any one child is larger width than the panel. grow the panel to the width of that child + padding
        if (child -> bounds.width >= this -> bounds.width){
            this -> bounds.width = child -> bounds.width + this -> padding * 2; // padding * 2 applies the padding on the right hand side as well
        }
        
        // if this child would overflow the panel width, wrap to next row
        if (cursorX + child -> bounds.width > maxWidth) {
            cursorX = this -> bounds.x + this -> padding;
            cursorY += rowHeight + this -> gap;
            rowHeight = 0;
        }

        // save original position only — let child update its own size during render
        float origX = child -> bounds.x;
        float origY = child -> bounds.y;
        child -> bounds.x = cursorX;
        child -> bounds.y = cursorY;
        child -> render();

        // use post-render dimensions (child panel may have grown), then restore position
        float childW = child -> bounds.width;
        float childH = child -> bounds.height;
        child -> bounds.x = origX;
        child -> bounds.y = origY;

        cursorX += childW + this -> gap;
        if (childH > rowHeight) rowHeight = childH;
    }

    // update height to fit all children — will be correct on next frame for nested panels
    // ONLY if the children are larger than the container
    if ((cursorY + rowHeight + this -> padding) > this -> bounds.height){
        this -> bounds.height = (cursorY + rowHeight + this -> padding);
    }
   
    
}
