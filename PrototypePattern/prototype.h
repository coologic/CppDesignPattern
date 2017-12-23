#ifndef PROTOTYPE_H
#define PROTOTYPE_H
class Prototype {
public:
    virtual ~Prototype() { }
    virtual Prototype* Clone() = 0;
};
#endif // PROTOTYPE_H
