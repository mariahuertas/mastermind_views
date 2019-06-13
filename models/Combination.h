#ifndef COMBINATION_H
#define COMBINATION_H
#include <iostream>
#include <assert.h>
#include "Color.h"

class Combination
{
public:
    Combination();
    ~Combination() = default;
    char* getCombination();
    void setCombination(char *combination);

protected:
    char *combination;
    int colours;
    Color *color;
};

#endif // COMBINATION_H
