#ifndef ADAPTER_H
#define ADAPTER_H
#include "adaptee.h"
#include "target.h"
class Adapter : public Adaptee, public Target {
public:
    void request() override {
        doSomething();
    }
};
#endif // ADAPTER_H
