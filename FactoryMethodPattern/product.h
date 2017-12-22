#ifndef PRODUCT_H
#define PRODUCT_H
class Product {
public:
    virtual ~Product() { };
    virtual void Init() = 0;
    virtual int Number() = 0;
};
#endif // PRODUCT_H
