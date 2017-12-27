#ifndef VISITOR_H
#define VISITOR_H
#include "ivisitor.h"
class Visitor : public IVisitor {
public:
    //访问el1元素
    void visit1(Element *el1) override {
        el1->doSomething();
    }
    //访问el2元素
    void visit2(Element *el2) override {
        el2->doSomething();
    }
};
#endif // VISITOR_H
