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
    virtual ~GameState();
    virtual void update();
    virtual void draw();
    InputHandler* inputHandler;
    WorldHandler* worldHandler;
    //holds GOs that needs to be rendered
    std::vector<GameObject*> renderObjects;
    //holds GOs that need to be updated
    std::vector<GameObject*> updateObjects;
    Player player = Player(Math::Vector2D(500, 400), true, 50);
};
#endif /* GameState_hpp */
