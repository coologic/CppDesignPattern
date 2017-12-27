#ifndef ELEMENT_H
#define ELEMENT_H
class IVisitor;
class Element {
public:
    virtual ~Element() { }
    virtual void doSomething() = 0;
//允许谁来访问
    virtual void accept(IVisitor *visitor) = 0;
};
#endif // ELEMENT_H
