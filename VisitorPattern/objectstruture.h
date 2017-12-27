#ifndef OBJECTSTRUTURE_H
#define OBJECTSTRUTURE_H
#include "concreteelement.h"
class ObjectStruture {
//对象生成器， 这里通过一个工厂方法模式模拟
public:
    static Element *createElement() {
        if(true)//判断条件
            return new ConcreteElement1();
        return new ConcreteElement2();
    }
};
#endif // OBJECTSTRUTURE_H
