#ifndef STARTCONTROLLER_H
#define STARTCONTROLLER_H
#include "colocatecontroller.h"
#include "controller.h"
#include "game.h"
#include "views/controllervisitor.h"

class StartController: public Controller {
public:
    void accept(ControllerVisitor *controllerVisitor);
    void start();
    void generateMisteryColours();
    char* getSecretCombination();
    StartController(Game *game);
};

#endif // STARTCONTROLLER_H
