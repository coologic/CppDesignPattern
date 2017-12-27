#ifndef SUBJECT_H
#define SUBJECT_H
#include "observer.h"
#include <QList>
class Subject {
public:
    //增加一个观察者
    void addObserver(Observer *o) {
        obsVector.append(o);
    }
    //删除一个观察者
    void delObserver(Observer *o) {
        obsVector.removeOne(o);
    }
    //通知所有观察者
    void notifyObservers() {
        for(Observer *o : obsVector)
            o->update();
    }
private:
    //定义一个观察者数组
    QList<Observer *> obsVector;
};
#endif // SUBJECT_H
