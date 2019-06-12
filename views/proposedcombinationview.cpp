#include "proposedcombinationview.h"

ProposedCombinationView::ProposedCombinationView(ColocateController *colocateController)
{
this->colocateController=colocateController;
}

void ProposedCombinationView::readCombination(){
    Color *color;
    char value = ' ';
    char *combination;
    combination = new char [4];
    for(int i=0; i<4; i++){
        do{
            cout << "Inserta el color "<< i+1 <<": ";
            cin >> value;
            value = toupper(value);
        } while(color->isColor(value));

    combination[i] = value;
    }
    colocateController->read(combination);
}

void ProposedCombinationView::printCombination(){

    char *combination = colocateController->getProposedCombination();

    for (int i=0; i<4; i++){
        cout << combination[i] << " ";
    }
    //cout<<"/"<<"Black: "<< result->getBlackToken()<<" White: "<< result->getWhiteToken();
    cout<<endl;


}
