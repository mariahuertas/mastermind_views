#include "mastermindview.h"

MasterMindView::MasterMindView(){
    startView = new StartView();
    gameView = new GameView ();
    continueView = new ContinueView ();
}

MasterMindView::~MasterMindView(){
    delete startView;
    delete gameView;
    delete continueView;
}

void MasterMindView:: interact(Controller *controller){
    controller->accept(this);
}

void MasterMindView:: visit (StartController *startController){
    startView->interact(startController);
}

void MasterMindView:: visit (ColocateController *colocateController){
    gameView->interact(colocateController);
}

void MasterMindView::visit (ContinueController *continueController){
    continueView->interact(continueController);
}
