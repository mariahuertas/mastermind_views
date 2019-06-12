#ifndef GAMEVIEW_H
#define GAMEVIEW_H
#include "controllers/colocatecontroller.h"
#include "proposedcombinationview.h"

class GameView
{
public:
    GameView();
    void interact(ColocateController *colocateController);
    void readCombination(ProposedCombinationView *proposedCombinationView);
    void showGame(ProposedCombinationView *proposedCombinationView, ColocateController *colocateController);
};

#endif // GAMEVIEW_H
