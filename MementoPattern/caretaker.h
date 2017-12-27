#ifndef CARETAKER_H
#define CARETAKER_H
#include "memento.h"
class Caretaker {
public:
    Memento *getMemento() {
        return memento_;
    }
    void setMemento(Memento *memento) {
        memento_ = memento;
    }
//备忘录对象
private:
    Memento *memento_;
};
#endif // CARETAKER_H
