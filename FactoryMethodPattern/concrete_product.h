#ifndef CONCRETE_PRODUCT_H
#define CONCRETE_PRODUCT_H
#include "product.h"
//下面把多个产品写到一起了，应该分开
class ConcreteProduct1 : public Product {
public:
    virtual void Init() override { }
    virtual int Number() override {
        return 1;
    }
};
class ConcreteProduct2 : public Product {
public:
    virtual void Init() override { }
    virtual int Number() override {
        return 2;
    }
};
class ConcreteProduct3 : public Product {
public:
    virtual void Init() override { }
    virtual int Number() override {
        return 3;
    }
};
#endif // CONCRETE_PRODUCT_H
