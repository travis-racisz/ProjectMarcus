//
//  LevelEditor.h
//  cppARPG
//
//  Created by Travis Racisz on 2026/03/24.
//

#ifndef LevelEditor_h
#define LevelEditor_h

#include <nlohmann/json.hpp>
#include <vector>
#include <string>
#include <memory>
#include "Panel.hpp"
#include "Colors.h"

class LevelEditor {
        
    
    // things we might need
    // load level from file
    // be able to load sprites from files
    // cut sprites out of files
    // place sprites
    // assign data to a sprite tile, such as walkable or not.
    // erase tile
    // place enemy spawn points
private:
    bool isVisibile;
    std::vector<int> enemySpawnPoints;
    std::vector<std::string> sprites;
    std::vector<Panel> panels;
    
    
public:
    LevelEditor(); 
    void drawUi();
    void loadLevel(); // need to figure out what type a json file will be probably a string or char[]
    void update(float delta);
    
    
    
    
};;


#endif /* LevelEditor_h */
