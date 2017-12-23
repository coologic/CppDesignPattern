#ifndef CONCRETE_CLASS_H
#define CONCRETE_CLASS_H
#include "abstract_class.h"
#include <QDebug>
class ConcreteClass1 : public AbstractClass{
//实现基本方法
protected:
    virtual void doAnything() override {qDebug()<<"ConcreteClass1";}
    virtual void doSomething() override { }
};
class ConcreteClass2 : public AbstractClass{
//实现基本方法
protected:
    virtual void doAnything() override {qDebug()<<"ConcreteClass2";}
    virtual void doSomething() override { }
};
#endif // CONCRETE_CLASS_H
