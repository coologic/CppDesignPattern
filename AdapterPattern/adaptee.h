#ifndef ADAPTEE_H
#define ADAPTEE_H
#include <QDebug>
class Adaptee {
//原有的业务逻辑
public:
    void doSomething(){
        qDebug()<<"I'm kind of busy,leave me alone,pls!";
    }
};
#endif // ADAPTEE_H
