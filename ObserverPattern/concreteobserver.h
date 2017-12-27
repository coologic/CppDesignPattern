#ifndef CONCRETEOBSERVER_H
#define CONCRETEOBSERVER_H
#include <QDebug>
#include "observer.h"
class ConcreteObserver : public Observer {
//实现更新方法
public:
    void update() override {
        qDebug()<<"get message";
    }
};
#endif // CONCRETEOBSERVER_H
