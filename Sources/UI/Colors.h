//
//  Colors.h
//  cppARPG
//
//  Created by Travis Racisz on 2026/03/26.
//
//  Catppuccin Mocha palette
//  https://catppuccin.com/palette/
//
 
#ifndef Colors_h
#define Colors_h
 
#include "raylib.h"
 
namespace Mocha {
    // Accent colors
    inline constexpr Color Rosewater = { 245, 224, 220, 255 };
    inline constexpr Color Flamingo  = { 242, 205, 205, 255 };
    inline constexpr Color Pink      = { 245, 194, 231, 255 };
    inline constexpr Color Mauve     = { 203, 166, 247, 255 };
    inline constexpr Color Red       = { 243, 139, 168, 255 };
    inline constexpr Color Maroon    = { 235, 160, 172, 255 };
    inline constexpr Color Peach     = { 250, 179, 135, 255 };
    inline constexpr Color Yellow    = { 249, 226, 175, 255 };
    inline constexpr Color Green     = { 166, 227, 161, 255 };
    inline constexpr Color Teal      = { 148, 226, 213, 255 };
    inline constexpr Color Sky       = { 137, 220, 235, 255 };
    inline constexpr Color Sapphire  = { 116, 199, 236, 255 };
    inline constexpr Color Blue      = { 137, 180, 250, 255 };
    inline constexpr Color Lavender  = { 180, 190, 254, 255 };
 
    // Text
    inline constexpr Color Text      = { 205, 214, 244, 255 };
    inline constexpr Color Subtext1  = { 186, 194, 222, 255 };
    inline constexpr Color Subtext0  = { 166, 173, 200, 255 };
 
    // Overlays
    inline constexpr Color Overlay2  = { 147, 153, 178, 255 };
    inline constexpr Color Overlay1  = { 127, 132, 156, 255 };
    inline constexpr Color Overlay0  = { 108, 112, 134, 255 };
 
    // Surfaces
    inline constexpr Color Surface2  = {  88,  91, 112, 255 };
    inline constexpr Color Surface1  = {  69,  71,  90, 255 };
    inline constexpr Color Surface0  = {  49,  50,  68, 255 };
 
    // Backgrounds
    inline constexpr Color Base      = {  30,  30,  46, 255 };
    inline constexpr Color Mantle    = {  24,  24,  37, 255 };
    inline constexpr Color Crust     = {  17,  17,  27, 255 };
}
 
#endif /* Colors_h */
