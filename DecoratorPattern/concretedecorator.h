#ifndef CONCRETEDECORATOR_H
#define CONCRETEDECORATOR_H
#include <QDebug>
#include "decorator.h"
class ConcreteDecorator1 : public Decorator {
public:
    ConcreteDecorator1(Component *component)
        : Decorator(component) {
    }
    //重写父类的Operation方法
    void operate() override {
        method1();
        Decorator::operate();
    }
private:
    //定义自己的修饰方法
    void method1(){
        qDebug()<<"method1 of Decorator1";
    }
};
class ConcreteDecorator2 : public Decorator {
public:
    ConcreteDecorator2(Component *component)
        : Decorator(component) {
    }
    //重写父类的Operation方法
    void operate() override {
        method1();
        Decorator::operate();
    }
private:
    //定义自己的修饰方法
    void method1(){
        qDebug()<<"method1 of Decorator2";
    }
};
#endif // CONCRETEDECORATOR_H
