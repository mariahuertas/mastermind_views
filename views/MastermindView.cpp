#include "MastermindView.h"

MastermindView::MastermindView(){
    startView = new StartView();
    gameView = new GameView ();
    continueView = new ContinueView ();
}

MastermindView::~MastermindView(){
    delete startView;
    delete gameView;
    delete continueView;
}

void MastermindView:: interact(Controller *controller){
    controller->accept(this);
}

void MastermindView:: visit (StartController *startController){
    startView->interact(startController);
}

void MastermindView:: visit (ColocateController *colocateController){
    gameView->interact(colocateController);
}

void MastermindView::visit (ContinueController *continueController){
    continueView->interact(continueController);
}
