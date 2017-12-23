#ifndef DIRECTOR_H
#define DIRECTOR_H
#include "concrete_builder.h".h"
class Director {
public:
    Product getAProduct(Builder *builder){
        builder->setA();
        builder->setB();
        return builder->getProduct();
    }
};
#endif // DIRECTOR_H
