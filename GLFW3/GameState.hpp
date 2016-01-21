//
//  GameState.hpp
//  Project2
//
//  Created by William Meaton on 21/01/2016.
//  Copyright © 2016 WillMeaton.uk. All rights reserved.
//

#ifndef GameState_hpp
#define GameState_hpp

#include <stdio.h>
#include "State.hpp"
#include <vector>
#include "Handlers.h"
#include "Player.hpp"

class GameState : public State{
public:
    GameState();
    ~GameState(){};
    void update();
    void draw();
    std::vector<GameObject*> objects;
    Player* p = new Player(Math::Vector2D(50, 50), true, 50);
};
#endif /* GameState_hpp */
