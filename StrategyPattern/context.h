#ifndef CONTEXT_H
#define CONTEXT_H
#include "strategy.h"
class Context {
public:
    //构造函数设置具体策略
    Context(Strategy *strategy) {
        strategy_ = strategy;
    }
    //封装后的策略方法
    void doAnythinig() {
        strategy_->doSomething();
    }
private:
    Strategy *strategy_ = nullptr;
};
#endif // CONTEXT_H
