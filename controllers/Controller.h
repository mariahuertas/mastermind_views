#ifndef CONTROLLER_H
#define CONTROLLER_H

#include "ControllerVisitor.h"
#include "State.h"
#include "Game.h"

class Controller
{
public:
    virtual void accept(ControllerVisitor *controllerVisitor)=0;
    void setState(State state);

protected:
    Controller(Game *game);
    Game *game;
};

#endif // CONTROLLER_H