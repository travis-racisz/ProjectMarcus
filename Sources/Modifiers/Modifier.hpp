//
//  Modifier.hpp
//  ShatteredScrolls
//
//  Created by Travis Racisz on 2026/03/28.
//

#ifndef Modifier_hpp
#define Modifier_hpp

#include <stdio.h>

enum class ModType {
    FlatHealthIncrease,
    PercentHealthIncrease,
    
    FlatManaIncrease,
    PercentManaIncrease,
    
    FlatPhysicalDamageIncrease,
    PercentPhysicalDamageIncrease,
    
    // more modifiers later like ele damage, fire, lightning, ice, poison? 
};

enum class GameEvent {
    OnHit,
    OnKill,
    OnCast
};

class Modifier {
    
    
private:
    
public:
    ModType type;
    float value;
    GameEvent event;
   
};

#endif /* Modifier_hpp */
