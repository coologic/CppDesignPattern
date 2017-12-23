#ifndef BUILDER_H
#define BUILDER_H
#include "product.h"
class Builder {
public:
    virtual void setA() = 0;
    virtual void setB() = 0;
    virtual Product getProduct() = 0;
};
#endif // BUILDER_H
