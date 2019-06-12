#ifndef CONTROLLER_H
#define CONTROLLER_H
#include "game.h"
#include "state.h"
#include "views/controllervisitor.h"

class Controller
{   
public:
    virtual void accept(ControllerVisitor *controllerVisitor)=0;

protected:
    Controller(Game *game);
    State getState();
    void setState(State state);
    Game getGame();
    Game *game;
};

#endif // CONTROLLER_H


