#include "concretecommand.h"
#include "concretereciver.h"
#include "invoker.h"
int main(int argc, char *argv[]) {
    //首先声明调用者Invoker
    Invoker *invoker = new Invoker();
    //定义接收者
    Receiver *receiver = new ConcreteReciver1();
    Receiver *receiver2 = new ConcreteReciver2();
    //定义一个发送给接收者的命令
    Command *command = new ConcreteCommand1(receiver);
    Command *command2 = new ConcreteCommand2(receiver);
    Command *command3 = new ConcreteCommand1(receiver2);
    Command *command4 = new ConcreteCommand2(receiver2);
    //把命令交给调用者去执行
    invoker->setCommand(command);
    invoker->action();
    invoker->setCommand(command2);
    invoker->action();
    invoker->setCommand(command3);
    invoker->action();
    invoker->setCommand(command4);
    invoker->action();
}
