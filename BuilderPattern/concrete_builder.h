#ifndef CONCRETEPRODUCT_H
#define CONCRETEPRODUCT_H
#include "builder.h"
class ConcreteBuilder : public Builder {
public:
    virtual void setA() override {product.setA(1);}
    virtual void setB() override {product.setB(2);}
    Product getProduct() {
        return product;
    }
private:
    Product product;
};
#endif // CONCRETEPRODUCT_H
