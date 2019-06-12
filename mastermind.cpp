#include "mastermind.h"

MasterMind::MasterMind(){
    logic = new Logic();
    masterMindView = new MasterMindView();
}

MasterMind::~MasterMind(){
    delete logic;
    delete masterMindView;
}

void MasterMind::play(){
   Controller *controller;
    do{
        controller = logic->getController();
        if (controller != NULL){
            masterMindView->interact(controller);
        }
    } while (controller != NULL);
}
