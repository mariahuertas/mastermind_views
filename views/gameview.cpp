#include "gameview.h"

GameView::GameView()
{

}
void GameView:: interact(ColocateController *colocateController){
    std::cout<<"Inserta 4 colores: Red(R), Green(G), Purple(P), Brown(B), Yellow(Y), Orange(O)"<<std::endl;
    ProposedCombinationView *proposedCombinationView = new ProposedCombinationView (colocateController);

    this->readCombination(proposedCombinationView);
    this->showGame(proposedCombinationView, colocateController);
}

void GameView:: readCombination(ProposedCombinationView *proposedCombinationView){
    proposedCombinationView->readCombination();
}

void GameView:: showGame(ProposedCombinationView *proposedCombinationView, ColocateController *colocateController){
    proposedCombinationView->printCombination();
    std::cout <<"FALTA ACIERTOS E IMPRIMIR TABLERO ENTERO"<<std::endl;

    if(colocateController->isWinner()){
        std::cout << "GANADOR"<<std::endl;
    }

    else if (colocateController->getTurn()==10){
        std::cout << "OOHHH" << endl;
        //colocateController->setState(FINAL);
    }

    else
        colocateController->incrementTurn();
}
