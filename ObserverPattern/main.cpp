#include "concreteobserver.h"
#include "concretesubject.h"
int main(int argc, char *argv[]) {
    ConcreteSubject *subject = new ConcreteSubject();
    //定义一个观察者
    Observer *obs= new ConcreteObserver();
    //观察者观察被观察者
    subject->addObserver(obs);
    //观察者开始活动了
    subject->doSomething();
    delete subject;
    delete obs;
}
