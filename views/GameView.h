#ifndef GAMEVIEW_H
#define GAMEVIEW_H
#include "controllers/ColocateController.h"
#include "ProposedCombinationView.h"

class GameView
{
public:
    GameView() = default;
    void interact(ColocateController *colocateController);
    void readCombination(ProposedCombinationView *proposedCombinationView);
    void showGame(ProposedCombinationView *proposedCombinationView, ColocateController *colocateController);
};

#endif // GAMEVIEW_H
