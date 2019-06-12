#ifndef GAME_H
#define GAME_H
#include "models/proposedcombination.h"
#include "models/secretcombination.h"
#include "state.h"

class Game
{
public:
    Game();
    ~Game();
    State getState();
    void setState(State state);
    void read(char *combination);
    int getTurn();
    bool isWinner();
    char *getProposedCombination();
    char *getSecretCombination();
    void incrementTurn();
    void calculateResult();
    void generateMisteryColours();
    void clear();

private:
    const static int MAX_PROPOSED_COMBINATION = 10;
    SecretCombination *secretCombination;
    ProposedCombination **proposedCombination;
    State state;
    int turn;
};

#endif // GAME_H
