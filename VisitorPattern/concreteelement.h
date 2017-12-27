#ifndef CONCRETEELEMENT_H
#define CONCRETEELEMENT_H
#include "element.h"
#include "ivisitor.h"
class ConcreteElement1 : public Element {
//完善业务逻辑
public:
    void doSomething() override { }
    //允许那个访问者访问
    void accept(IVisitor *visitor) override {
        visitor->visit1(this);
    }
};
class ConcreteElement2 : public Element {
//完善业务逻辑
public:
    void doSomething() override { }
    //允许那个访问者访问
    void accept(IVisitor *visitor) override {
        visitor->visit2(this);
    }
};
#endif // CONCRETEELEMENT_H
