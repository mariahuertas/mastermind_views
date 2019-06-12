#include "logic.h"

Logic::Logic()
{
    game = new Game();
    colocateController = new ColocateController(game);
    startController = new StartController(game);
    continueController = new ContinueController(game);
}

Controller *Logic::getController(){
    switch (game->getState()){
    case (INITIAL):
        return startController;
    case (IN_GAME):
        return colocateController;
    case (FINAL):
        return continueController;
        case (EXIT):
    default:
        return NULL;
    }
}
