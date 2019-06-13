#ifndef PROPOSEDCOMBINATION_H
#define PROPOSEDCOMBINATION_H
#include <iostream>
#include <cstdlib>
#include <ctype.h>
#include "SecretCombination.h"
#include "Result.h"

class ProposedCombination : public Combination
{
public:
    ProposedCombination();
    ~ProposedCombination();
    void calculateResult(SecretCombination *secretCombination);
    bool isWinner();
    void setProposedCombination(char* proposedCombination);
    Result *getResult();

private:
    Result *result;
};

#endif // PROPOSEDCOMBINATION_H