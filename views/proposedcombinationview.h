#ifndef PROPOSEDCOMBINATIONVIEW_H
#define PROPOSEDCOMBINATIONVIEW_H
#include "controllers/colocatecontroller.h"

class ProposedCombinationView
{
public:
    ProposedCombinationView(ColocateController *colocateController);
    void readCombination();
    void printCombination();

private:
    ColocateController *colocateController;
};

#endif // PROPOSEDCOMBINATIONVIEW_H
