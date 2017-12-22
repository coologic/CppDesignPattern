#ifndef CREATOR_H
#define CREATOR_H
#include "product.h"
//抽象工厂
//若工厂则直接传入标识符通过case判断返回对应产品即可，不需要建立不同的具体工厂
class Creator {
public:
    virtual ~Creator() { };
    virtual Product *Create() = 0;
};
#endif // CREATOR_H
