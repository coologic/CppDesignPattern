#ifndef CONCRETECOMPONENT_H
#define CONCRETECOMPONENT_H
#include "component.h"
#include <QDebug>
class ConcreteComponent : public Component {
public:
    void operate() override {
        qDebug()<<"ConcreteComponent do Something";
    }
};
#endif // CONCRETECOMPONENT_H
