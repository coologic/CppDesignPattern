#ifndef STATE_H
#define STATE_H
class Context;
class State {
//设置环境角色
public:
    void setContext(Context *_context){
        context = _context;
    }
    //行为1
    virtual void handle1() = 0;
    //行为2
    virtual void handle2() = 0;
//定义一个环境角色， 提供子类访问
protected:
    Context *context;
};
#endif // STATE_H
