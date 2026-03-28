//
//  fireball.hpp
//  ShatteredScrolls
//
//  Created by Travis Racisz on 2026/03/28.
//

#ifndef Fireball_hpp
#define Fireball_hpp

#include "Spell.hpp"
#include <stdio.h>



class Fireball : public Spell {
private:
    int baseDamage; // maybe should be a float
    
public:
    float lifeTime;
    int projectileCount;
    float igniteChance; 
    
    
    
};
#endif /* fireball_hpp */
