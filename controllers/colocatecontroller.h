#ifndef COLOCATECONTROLLER_H
#define COLOCATECONTROLLER_H
#include "controller.h"
#include "game.h"
#include "iostream"
#include "views/controllervisitor.h"
using namespace std;

class ColocateController : public Controller
{
public:
    void accept(ControllerVisitor *controllerVisitor);
    ColocateController(Game *game);
    bool isWinner();
    void read(char *combination);
    void calculateResult();
    char *getProposedCombination();
    void incrementTurn();
    int getTurn();
};

#endif // COLOCATECONTROLLER_H
