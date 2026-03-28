//
//  Entity.h
//  ShatteredScrolls
//
//  Created by Travis Racisz on 2026/03/27.
//

#ifndef Entity_h
#define Entity_h
#include "raylib.h"


class Entity {
    
    // things that all entites in the game are going to have
    // such as sprites, positions, etc.
    // then other classes such as player, or monsters can extend this class, with their own stuff like stats, items, movement logic.
    // idk that makes sense to me
private:
    Texture2D sprite; // will probably need to have multiple sets of sprites for animations 
    Vector2 position;

public:
    Entity(Texture2D sprite, Vector2 position);
    virtual void update(float delta) = 0;
    
    void setPosition(Vector2 position) {
        this -> position = position;
    }
    
    Vector2 getPosition(){
        return this -> position;
    }
    
    Texture2D getSprite(){
        return this -> sprite;
    }
    
    void setSprite(Texture2D sprite){
        this -> sprite = sprite;
    }
    
    
};

#endif /* Entity_h */
