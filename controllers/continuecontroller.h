#ifndef CONTINUECONTROLLER_H
#define CONTINUECONTROLLER_H
#include "game.h"
#include "controllers/controller.h"
#include "views/controllervisitor.h"

class ControllerVisitor;

class ContinueController : public Controller{
public:
    ContinueController(Game *game);
    void continueGame(char respuesta);
    void accept(ControllerVisitor *controllerVisitor);
    void clear();
};

#endif // CONTINUECONTROLLER_H
