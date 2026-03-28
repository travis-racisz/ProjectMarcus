//
//  Player.cpp
//  ShatteredScrolls
//
//  Created by Travis Racisz on 2026/03/28.
//

#include "Player.hpp"
#include "raylib.h"

Player::Player(Texture2D sprite, Vector2 position) : Entity(sprite, position),
    baseHealth(100.f),
    baseMana(100.0f),
    baseStrength(10),
    baseIntelligence(10),
    baseDexterity(10),
    baseFireResistence(0),
    baseLightningResistence(0),
    baseIceResistence(0),
    baseMoveSpeed(10)
{
    
    
}


void Player::update(float delta){
    if (IsKeyPressed(KEY_W)){
        setPosition(Vector2{getPosition().x, getPosition().y + baseMoveSpeed * delta});
    }
    if (IsKeyPressed(KEY_A)){
        setPosition(Vector2{getPosition().x - baseMoveSpeed * delta, getPosition().y});
    }
    
    if (IsKeyPressed(KEY_S)){
        setPosition(Vector2{getPosition().x, getPosition().y - baseMoveSpeed * delta});
    }
    
    if(IsKeyPressed(KEY_D)){
        setPosition(Vector2{getPosition().x + baseMoveSpeed * delta, getPosition().y});
    }
    
    DrawTexture(getSprite(), getPosition().x, getPosition().y, WHITE);

    
}
