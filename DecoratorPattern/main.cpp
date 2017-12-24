#include "concretecomponent.h"
#include "concretedecorator.h"
int main(int argc, char *argv[]) {
    Component *component = new ConcreteComponent();
    //第一次修饰
    component = new ConcreteDecorator1(component);
    //第二次修饰
    component = new ConcreteDecorator2(component);
    //修饰后运行
    component->operate();
}
