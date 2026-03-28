//
//  Player.hpp
//  ShatteredScrolls
//
//  Created by Travis Racisz on 2026/03/28.
//

#ifndef Player_hpp
#define Player_hpp

#include <stdio.h>
#include "Entity.h"
#include <vector>
#include "Modifier.hpp"
#include "raylib.h"



class Player : public Entity {
private:
    // these values are base values
    float baseHealth;
    float baseMana;
    int baseStrength;
    int baseIntelligence;
    int baseDexterity;
    int baseFireResistence;
    int baseLightningResistence;
    int baseIceResistence;
    float baseMoveSpeed;
    
    
    std::vector<Modifier> modifiers;
    
public:
    
    
     
    Player(Texture2D sprite, Vector2 position);
    ~Player() = default; // idk if we need this destructor. might be a good idea I guess
    
    float getHealth();
    void setHealth();
    
    float getMana();
    void setMana();
    
    int getStrength();
    void setStrength();
    
    int getIntelligence();
    void setIntelligence();
    
    int getDexterity();
    void setDexterity();
    
    int getFireResistence();
    void setFireResistence();
    
    int getIceResistence();
    void setIceResistence();
    
    int getLightningResistence();
    void setLightningResistence();
    
    float getMoveSpeed();
    void setMoveSpeed();
    
    std::vector <Modifier> getAllModifiers();
    void applyModifiers();
    
    Rectangle hitbox;
    
    void update(float delta) override;
    
    
    
};

#endif /* Player_hpp */
