#ifndef CONCRETECOMMAND_H
#define CONCRETECOMMAND_H
#include <QDebug>
#include "command.h"
#include "receiver.h"
class ConcreteCommand1 : public Command {
private:
    Receiver *receiver_;//哪个Receiver类进行命令处理
public:
    //构造函数传递接收者
    ConcreteCommand1(Receiver *receiver) {
        receiver_ = receiver;
    }
    //必须实现一个命令
    void execute() {
        //业务处理
        qDebug()<<"command1 run";
        receiver_->doSomething();
    }
};
class ConcreteCommand2 : public Command {
private:
    Receiver *receiver_;
public:
    ConcreteCommand2(Receiver *receiver) {
        receiver_ = receiver;
    }
    void execute() {
        qDebug()<<"command2 run";
        receiver_->doSomething();
    }
};
#endif // CONCRETECOMMAND_H
