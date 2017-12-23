#ifndef CONCRETEMEDIATOR_H
#define CONCRETEMEDIATOR_H
#include <QDebug>
#include "mediator.h"
class ConcreteMediator : public Mediator {
public:
    void setC1(Colleague *c1) override {
        c1_ = c1;
    }
    void setC2(Colleague *c2) override {
        c2_ = c2;
    }
    void doSomething1() override {
        qDebug()<<"mediator get c1 sended message";
        c2_->selfMethod();
    }
    void doSomething2() override {
        qDebug()<<"mediator get c2 sended message";
        c1_->selfMethod();
    }
private:
    Colleague *c1_;
    Colleague *c2_;
};
#endif // CONCRETEMEDIATOR_H
