#ifndef CONTEXT_H
#define CONTEXT_H
#include "state.h"
class Context {
//定义状态
public:
    static State *STATE1;
    static State *STATE2;
//当前状态
//获得当前状态
    State *getCurrentState() {
        return CurrentState;
    }
    //设置当前状态
    void setCurrentState(State *currentState) {
        CurrentState = currentState;
        CurrentState->setContext(this);
    }
    //行为委托
    void handle1(){
        CurrentState->handle1();
    }
    void handle2(){
        CurrentState->handle2();
    }
private:
    State *CurrentState;
};
#endif // CONTEXT_H
