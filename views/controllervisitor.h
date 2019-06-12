#ifndef CONTROLLERVISITOR_H
#define CONTROLLERVISITOR_H
class StartController;
class ColocateController;
class ContinueController;

class ControllerVisitor
{
public:
    virtual ~ControllerVisitor(){}
    virtual void visit (StartController *startController)=0;
    virtual void visit (ColocateController *colocateController)=0;
    virtual void visit (ContinueController *continueController)=0;
};

#endif // CONTROLLERVISITOR_H
