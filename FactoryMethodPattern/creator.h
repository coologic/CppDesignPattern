#ifndef CREATOR_H
#define CREATOR_H
#include "product.h"
class Creator {
public:
    virtual ~Creator() { };
    virtual Product *Create() = 0;
};
#endif // CREATOR_H
