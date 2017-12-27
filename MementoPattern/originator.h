#ifndef ORIGINATOR_H
#define ORIGINATOR_H
#include "memento.h"
class Originator {
public:
    QString getState() {
        return state_;
    }
    void setState(QString state) {
        state_ = state;
    }
    //创建一个备忘录
    Memento* createMemento(){
        return new Memento(state_);
    }
    //恢复一个备忘录
    void restoreMemento(Memento *_memento){
        setState(_memento->getState());
    }
//内部状态
private:
    QString state_ = "";
};
#endif // ORIGINATOR_H
