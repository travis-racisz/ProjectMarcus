//
//  Entity.cpp
//  ShatteredScrolls
//
//  Created by Travis Racisz on 2026/03/28.
//


#include "Entity.h"
#include "raylib.h"

Entity::Entity(Texture2D sprite, Vector2 position)
    : sprite(sprite), position(position)
{
    setSprite(sprite);
    setPosition(position);
}
