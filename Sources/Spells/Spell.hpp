//
//  Spell.hpp
//  ShatteredScrolls
//
//  Created by Travis Racisz on 2026/03/28.
//

#ifndef Spell_hpp
#define Spell_hpp

#include <stdio.h>
#include "raylib.h"
#include <string>
#include <vector>


enum class SpellTag {
    Projectile,
    Strike,
    DOT,
};

class Spell {
    
private:
    
public:
    std::string name;
    std::string description;
    int level;
    std::vector<SpellTag> tags; 
    
    
    
};

#endif /* Spell_hpp */
