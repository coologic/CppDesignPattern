#ifndef OBSERVER_H
#define OBSERVER_H
class Observer {
//更新方法
public:
    virtual ~Observer() { }
    virtual void update() = 0;
};
#endif // OBSERVER_H
