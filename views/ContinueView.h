#ifndef CONTINUEVIEW_H
#define CONTINUEVIEW_H
#include "controllers/ContinueController.h"

class ContinueView
{
public:
    ContinueView() = default ;
    void interact(ContinueController *continueController);
};

#endif // CONTINUEVIEW_H
