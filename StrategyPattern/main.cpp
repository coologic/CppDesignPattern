#include "concretestrategy.h"
#include "context.h"
int main(int argc, char *argv[]) {
    Strategy *strategy = new ConcreteStrategy1();
    //声明上下文对象
    Context context(strategy);
    //执行封装后的方法
    context.doAnythinig();
    delete strategy;
}
