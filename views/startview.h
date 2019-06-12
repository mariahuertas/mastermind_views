#ifndef STARTVIEW_H
#define STARTVIEW_H
#include "controllers/startcontroller.h"
#include "views/secretcombinationview.h"
class StartView
{
public:
    StartView();
    void interact(StartController *startController);
};

#endif // STARTVIEW_H
