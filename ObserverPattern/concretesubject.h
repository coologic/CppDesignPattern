#ifndef CONCRETESUBJECT_H
#define CONCRETESUBJECT_H
#include "subject.h"
class ConcreteSubject : public Subject {
//具体的业务
public:
    void doSomething() {
        notifyObservers();
    }
};
#endif // CONCRETESUBJECT_H
