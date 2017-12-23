#ifndef CONCRETECOLLEAGUE_H
#define CONCRETECOLLEAGUE_H
#include <QDebug>
#include "mediator.h"
#include "colleague.h"
class ConcreteColleague1 : public Colleague {
public:
    //通过构造函数传递中介者
    ConcreteColleague1(Mediator *mediator) {
        mediator_ = mediator;
    }
    //自有方法 self-method
    void selfMethod() override {
        qDebug()<<"c1 get mediator message";
    }
    //依赖方法 dep-method
    void depMethod() override {
        qDebug()<<"c1 send message";
        mediator_->doSomething1();
    }
private:
    Mediator *mediator_;
};
class ConcreteColleague2 : public Colleague {
//通过构造函数传递中介者
public:
    ConcreteColleague2(Mediator *mediator) {
        mediator_ = mediator;
    }
    void selfMethod() override {
        qDebug()<<"c2 get mediator message";
    }
    void depMethod() override {
        qDebug()<<"c2 send message";
        mediator_->doSomething2();
    }
private:
    Mediator *mediator_;
};
#endif // CONCRETECOLLEAGUE_H
