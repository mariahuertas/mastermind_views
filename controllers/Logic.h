#ifndef LOGIC_H
#define LOGIC_H
#include "Game.h"
#include "ColocateController.h"
#include "StartController.h"
#include "ContinueController.h"
#include "Controller.h"
#include "State.h"

class Logic
{
public:
    Logic();
    Controller *getController();

private:
    Game *game;
    ColocateController *colocateController;
    StartController *startController;
    ContinueController *continueController;
};

#endif // LOGIC_H


