#include "concretestate.h"
#include "context.h"
int main(int argc, char *argv[]) {
    Context *context = new Context();
    //初始化状态
    context->setCurrentState(new ConcreteState1());
    //行为执行
    context->handle1();
    context->handle2();
}
