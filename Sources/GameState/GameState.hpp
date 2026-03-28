//
//  GameState.hpp
//  ShatteredScrolls
//
//  Created by Travis Racisz on 2026/03/27.
//

#ifndef GameState_hpp
#define GameState_hpp

#include <stdio.h>

class GameState {
    
private:
    
    
public:
    
    enum Screen { MainMenu, Settings };
    struct ScreenState {
        Screen currentScreen = MainMenu;
    };
    
    
};

#endif /* GameState_hpp */
