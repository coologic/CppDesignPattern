#ifndef COMPONENT_H
#define COMPONENT_H
class Component {
//个体和整体都具有的共享
public:
    virtual ~Component() { }
    virtual void doSomething() = 0;
};
#endif // COMPONENT_H
