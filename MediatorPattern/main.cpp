#include "concretecolleague.h"
#include "concretemediator.h"
int main(int argc, char *argv[]) {
    //建立中介，完成联系
    Mediator *m = new ConcreteMediator;
    Colleague *c1 = new ConcreteColleague1(m);
    Colleague *c2 = new ConcreteColleague2(m);
    m->setC1(c1);
    m->setC2(c2);
    c1->depMethod();
    c2->depMethod();
}
