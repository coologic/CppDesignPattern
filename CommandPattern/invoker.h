#ifndef INVOKER_H
#define INVOKER_H
#include <QDebug>
#include "command.h"
class Invoker {
private:
    Command *command_;
public:
    //接受命令
    void setCommand(Command *command) {
        command_ = command;
        qDebug()<<"invoker add command";
    }
    //执行命令
    void action(){
        command_->execute();
        qDebug()<<"invoker action command";
    }
};
#endif // INVOKER_H
