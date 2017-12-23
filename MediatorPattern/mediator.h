#ifndef MEDIATOR_H
#define MEDIATOR_H
#include "colleague.h"
class Mediator {
public:
    virtual void setC1(Colleague *c1) = 0;
    virtual void setC2(Colleague *c2) = 0;
    virtual void doSomething1() = 0;
    virtual void doSomething2() = 0;
};
#endif // MEDIATOR_H
