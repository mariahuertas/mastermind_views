#include "proposedcombination.h"

ProposedCombination::ProposedCombination():Combination(){
    result = new Result();
}

ProposedCombination::~ProposedCombination(){
    delete result;
}

void ProposedCombination::print(){
    cout<< "Proposed colours: ";

    for (int i=0; i<colours; i++){
        cout << "|" << combination[i] << "|";
    }
    cout<<"/"<<"Black: "<<result->getBlackToken()<<" White: "<< result->getWhiteToken();
    cout<<endl;
}


void ProposedCombination::calculateResult(SecretCombination *secretCombination){
    char * combination = secretCombination->getCombination();
    for (int i=0; i<colours; i++){
    if (combination[i]==this->combination[i])
        result->incrementBlackToken();

    else{
        for (int j=0; j<colours; j++)
            if (combination[i]==this->combination[j] &&
                    (combination[j]!=this->combination[j]))
            result->incrementWhiteToken();
        }
    }
}

bool ProposedCombination:: isWinner(){
    return (result->getBlackToken())==colours ? true:false;
}
