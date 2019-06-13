#ifndef MASTERMINDVIEW_H
#define MASTERMINDVIEW_H
#include "controllers/Controller.h"
#include "ControllerVisitor.h"
#include "controllers/StartController.h"
#include "controllers/ColocateController.h"
#include "StartView.h"
#include "GameView.h"
#include "ContinueView.h"

class MastermindView : public ControllerVisitor
{
public:
    MastermindView();
    ~MastermindView();
    void interact(Controller *controller);
    void visit (StartController *startController) override;
    void visit (ColocateController *colocateController) override;
    void visit (ContinueController *continueController) override;

private:
    StartView *startView;
    GameView *gameView;
    ContinueView *continueView;
};

#endif // MASTERMINDVIEW_H
