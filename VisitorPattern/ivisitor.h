#ifndef IVISITOR_H
#define IVISITOR_H
class Element;
class IVisitor {
//可以访问哪些对象
public:
    virtual void visit1(Element *el1) = 0;
    virtual void visit2(Element *el2) = 0;
};
#endif // IVISITOR_H
