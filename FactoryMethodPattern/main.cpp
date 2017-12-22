#include <QDebug>
//包含某一个具体工厂头文件即可
#include "concrete_creator.h"
int main(int argc, char *argv[]) {
    Creator *c1 = new ConcreteCreator1();
    Product *p1 = c1->Create();
    Creator *c2 = new ConcreteCreator2();
    Product *p2 = c2->Create();
    Creator *c3 = new ConcreteCreator3();
    Product *p3 = c3->Create();
    qDebug()<<p1->Number();
    qDebug()<<p2->Number();
    qDebug()<<p3->Number();
    delete c1;
    delete c2;
    delete c3;
    delete p1;
    delete p2;
    delete p3;
    return 0;
}
