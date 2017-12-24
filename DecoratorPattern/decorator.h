#ifndef DECORATOR_H
#define DECORATOR_H
#include "component.h"
class Decorator : public Component {
//通过构造函数传递被修饰者
public:
    Decorator(Component *component){
        component_ = component;
    }
    //委托给被修饰者执行
    void operate() override {
        component_->operate();
    }
private:
    Component *component_ = nullptr;
};
#endif // DECORATOR_H
