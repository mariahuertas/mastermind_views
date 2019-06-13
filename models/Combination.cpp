#include "Combination.h"

Combination::Combination() {
    this->colours = 4;
    this->combination = new char[4];
}

char* Combination::getCombination(){
    return this->combination;
}

void Combination::setCombination(char *combination){
    this->combination = combination;
}
