#ifndef MASTERMINDVIEW_H
#define MASTERMINDVIEW_H
#include "controllers/controller.h"
#include "controllervisitor.h"
#include "controllers/startcontroller.h"
#include "controllers/colocatecontroller.h"
#include "startview.h"
#include "gameview.h"
#include "continueview.h"

class MasterMindView : public ControllerVisitor
{
public:
    MasterMindView();
    ~MasterMindView();
    void interact(Controller *controller);
    void visit (StartController *startController);
    void visit (ColocateController *colocateController);
    void visit (ContinueController *continueController);

private:
    StartView *startView;
    GameView *gameView;
    ContinueView *continueView;
};

#endif // MASTERMINDVIEW_H
