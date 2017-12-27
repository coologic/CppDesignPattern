#ifndef MEMENTO_H
#define MEMENTO_H
#include <qstring.h>
class Memento {
//发起人的内部状态
private:
    QString state_ = "";
//构造函数传递参数
public:
    Memento(QString state){
        state_ = state;
    }
    QString getState() {
        return state_;
    }
    void setState(QString state) {
        state_ = state;
    }
};
#endif // MEMENTO_H
