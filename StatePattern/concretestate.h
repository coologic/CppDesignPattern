#ifndef CONCRETESTATE_H
#define CONCRETESTATE_H
#include "state.h"
#include "context.h"
class ConcreteState1 : public State {
public:
    void handle1() override {
    //本状态下必须处理的逻辑
    }
    void handle2() override {
        //设置当前状态为stat2
        context->setCurrentState(Context::STATE2);
        //过渡到state2状态， 由Context实现
        context->handle2();
    }
};
class ConcreteState2 : public State {
public:
    void handle1() override {
        //设置当前状态为stat2
        context->setCurrentState(Context::STATE1);
        //过渡到state2状态， 由Context实现
        context->handle1();
    }
    void handle2() override {

    }
};
#endif // CONCRETESTATE_H
