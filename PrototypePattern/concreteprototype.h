#ifndef CONCRETEPROTOTYPE_H
#define CONCRETEPROTOTYPE_H
#include "prototype.h"
class ConcretePrototype : public Prototype {
public:
    ConcretePrototype() {b = new int;}
    virtual ~ConcretePrototype() {delete b;}
    virtual Prototype* Clone() override  {
        auto r = new ConcretePrototype;
        r->a = this->a;
        //b在构造函数会new，不需要拷贝
        return r;
    }
private:
    int a;
    int *b;
};
#endif // CONCRETEPROTOTYPE_H
