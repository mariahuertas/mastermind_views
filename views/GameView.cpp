#include "GameView.h"

void GameView:: interact(ColocateController *colocateController){
    assert(colocateController!= nullptr);
    std::cout<<"\nInsert 4 colors: Red(R), Green(G), Purple(P), Brown(B), Yellow(Y), Orange(O)"<<std::endl;
    ProposedCombinationView *proposedCombinationView = new ProposedCombinationView (colocateController);

    this->readCombination(proposedCombinationView);
    colocateController->calculateResult();
    this->showGame(proposedCombinationView, colocateController);
}

void GameView:: readCombination(ProposedCombinationView *proposedCombinationView){
    assert(proposedCombinationView!= nullptr);
    proposedCombinationView->readCombination();
}

void GameView:: showGame(ProposedCombinationView *proposedCombinationView, ColocateController *colocateController){
    assert(proposedCombinationView!= nullptr && colocateController != nullptr);
    proposedCombinationView->printCombination();
    if(colocateController->isWinner()){
        std::cout << "GANADOR"<<std::endl;
        colocateController->setState(FINAL);
    }

    else if (colocateController->getTurn()==10){
        std::cout << "OOHHH" << std::endl;
        colocateController->setState(FINAL);
    }
    else
        colocateController->incrementTurn();
}