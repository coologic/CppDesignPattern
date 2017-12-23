#ifndef PRODUCT_H
#define PRODUCT_H
#include <QDebug>
class Product {
public:
    void setA(int a) {a_ = a;}
    void setB(int b) {b_ = b;}
    void Show() {qDebug()<<a_<<b_;}
private:
    int a_, b_;
};
#endif // PRODUCT_H
