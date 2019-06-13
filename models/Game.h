#ifndef GAME_H
#define GAME_H

#include "ProposedCombination.h"
#include "SecretCombination.h"
#include "State.h"

class Game
{
public:
    Game();
    ~Game();
    State getState();
    void setState(State state);
    void read(char *combination);
    void setTurn(int turn);
    int getTurn();
    bool isWinner();
    ProposedCombination **getProposedCombination();
    char *getSecretCombination();
    void incrementTurn();
    void calculateResult();
    void generateMisteryColours();
    void clear();
    void setProposedCombination(ProposedCombination **proposedCombination);
    void setSecretCombination(SecretCombination *secretCombination);
    SecretCombination *getSecretCombinationObject();

private:
    const static int MAX_PROPOSED_COMBINATION = 10;
    SecretCombination *secretCombination;
    ProposedCombination **proposedCombination;
    State state;
    int turn;
};

#endif // GAME_H
