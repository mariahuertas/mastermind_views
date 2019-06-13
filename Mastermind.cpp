#include "Mastermind.h"

MasterMind::MasterMind(){
    logic = new Logic();
    mastermindView = new MastermindView();
}

MasterMind::~MasterMind(){
    delete logic;
    delete mastermindView;
}

void MasterMind::play(){
   Controller *controller;
    do{
        controller = logic->getController();
        if (controller != nullptr){
            mastermindView->interact(controller);
        }
    } while (controller != nullptr);
}
