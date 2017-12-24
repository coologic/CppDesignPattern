#ifndef STRATEGY_H
#define STRATEGY_H
class Strategy {
//策略模式的运算法则
public:
    virtual ~Strategy() { }
    virtual void doSomething() = 0;
};
#endif // STRATEGY_H
