#include "caretaker.h"
#include "originator.h"
int main(int argc, char *argv[]) {
    //定义出发起人
    Originator *originator = new Originator();
    //定义出备忘录管理员
    Caretaker *caretaker = new Caretaker();
    //创建一个备忘录
    caretaker->setMemento(originator->createMemento());
    //恢复一个备忘录
    originator->restoreMemento(caretaker->getMemento());
}
