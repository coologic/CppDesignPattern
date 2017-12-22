#ifndef CONCRETE_CREATOR_H
#define CONCRETE_CREATOR_H
#include "creator.h"
#include "concrete_product.h"
//下面把多个工厂写到一起了，应该分开
class ConcreteCreator1 : public Creator {
public:
    virtual Product *Create() override {
        auto product = new ConcreteProduct1();
        product->Init();//工厂负责完成初始化过程
        //返回一个可直接使用的产品
        return product;
    }
};
class ConcreteCreator2 : public Creator {
public:
    virtual Product *Create() override {
        auto product = new ConcreteProduct2();
        product->Init();
        return product;
    }
};
class ConcreteCreator3 : public Creator {
public:
    virtual Product *Create() override {
        auto product = new ConcreteProduct3();
        product->Init();
        return product;
    }
};
#endif // CONCRETE_CREATOR_H
