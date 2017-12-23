#ifndef ABSTRACT_CLASS_H
#define ABSTRACT_CLASS_H

class AbstractClass {
//模板方法
public:
    virtual void templateMethod() final{
        doAnything();
        doSomething();
    }
//基本方法
protected:
    virtual void doSomething() { };
    virtual void doAnything() { };
};

#endif // ABSTRACT_CLASS_H
