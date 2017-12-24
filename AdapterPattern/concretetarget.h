#ifndef CONCRETETARGET_H
#define CONCRETETARGET_H
#include <QDebug>
#include "target.h"
class ConcreteTarget : public Target {
public:
    void request() override {
        qDebug()<<"if you need any help,pls call me!";
    }
};
#endif // CONCRETETARGET_H
