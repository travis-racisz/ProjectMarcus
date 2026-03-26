//
//  LevelEditor.cpp
//  cppARPG
//
//  Created by Travis Racisz on 2026/03/24.
//

#include <stdio.h>
#include "LevelEditor.h"
#include "raylib.h"
#include "Panel.hpp"
#include "Button.hpp"
#include "Slider.hpp"
#include "Colors.h"




LevelEditor::LevelEditor() {
    Panel leftPanel = Panel(Rectangle{.x=0, .y=0, .width=100, .height=700}, 1, ColorAlpha(Mocha::Base, 0.8f));
    leftPanel.alignment = Left;
    leftPanel.padding = 25;
//    leftPanel.borderColor = Mocha::Pink;
    Slider slider = Slider(Rectangle{
        .x = 10,
        .y = 20,
        .width = 100,
        .height = 5,
    }, ColorAlpha(Mocha::Peach, 1.0f));

    slider.pillColor = Color{.r = 234, .g = 118, .b = 203, .a = 255};
    slider.label = "Test Label";

    leftPanel.children.push_back(std::make_unique<Slider>(slider));
    

    panels.push_back(std::move(leftPanel));
}

void LevelEditor::update(float delta){

};

void LevelEditor::drawUi(){
    for (auto& panel : panels){
        panel.render();
    }
    
};


void LevelEditor::loadLevel() { 
}
