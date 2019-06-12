#include "game.h"

Game::Game(){
    this->state = INITIAL;
    turn = 0;
    secretCombination = new SecretCombination();
    proposedCombination = new ProposedCombination *[MAX_PROPOSED_COMBINATION];
    for (int i = 0; i< MAX_PROPOSED_COMBINATION; i++){
       proposedCombination[i] = new ProposedCombination();
    }
}

Game::~Game(){
    delete[] secretCombination;
    for(int i = 0; i < MAX_PROPOSED_COMBINATION; ++i){
         delete[] proposedCombination[i];
     }
    delete[] proposedCombination;
}

State Game::getState() {
    return state;
}

void Game::setState(State state){
    this->state = state;
}

void Game:: read(char *combination) {
    proposedCombination[getTurn()]->setCombination(combination);
}

int Game::getTurn(){
    return turn;
}

bool Game::isWinner(){
    return proposedCombination[getTurn()]->isWinner();
}

char* Game::getProposedCombination(){
    cout<<endl;
    for (int i = 0; i < getTurn()+1; i++){
    return proposedCombination[getTurn()]->getCombination();
    }
}



char* Game::getSecretCombination(){
    return secretCombination->getCombination();
}

void Game::incrementTurn(){
    turn++;
}

void Game::calculateResult(){
    proposedCombination[getTurn()]->calculateResult(secretCombination);
}

void Game::generateMisteryColours(){
    secretCombination->generateMisteryColours();
}

void Game::clear(){
    turn=0;
}
