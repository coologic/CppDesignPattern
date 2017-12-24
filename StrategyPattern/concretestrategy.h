#ifndef CONCRETESTRATEGY_H
#define CONCRETESTRATEGY_H
#include <QDebug>
#include "strategy.h"
class ConcreteStrategy1 : public Strategy {
public:
    void doSomething() override {
        qDebug()<<"ConcreteStrategy1 doSomething";
    }
};
class ConcreteStrategy2 : public Strategy {
public:
    void doSomething() override {
        qDebug()<<"ConcreteStrategy2 doSomething";
    }
};
#endif // CONCRETESTRATEGY_H
