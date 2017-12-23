#ifndef CONCRETERECIVER_H
#define CONCRETERECIVER_H
#include <QDebug>
#include "receiver.h"
class ConcreteReciver1 : public Receiver{
//每个接收者都必须处理一定的业务逻辑
public:
    void doSomething(){
        qDebug()<<"Reciver1 doing";
    }
};
class ConcreteReciver2 : public Receiver{
//每个接收者都必须处理一定的业务逻辑
public:
    void doSomething(){
        qDebug()<<"Reciver2 doing";
    }
};
#endif // CONCRETERECIVER_H
