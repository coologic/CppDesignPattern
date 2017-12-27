#ifndef COMPOSITE_H
#define COMPOSITE_H
#include <QList>
#include "component.h"
class Composite : public Component {
public:
    ~Composite() {
        for(auto component : componentArrayList) {
            delete component;
        }
    }
    void doSomething() override { }
    //增加一个叶子构件或树枝构件
    void add(Component *component){
        componentArrayList.append(component);
    }
    //删除一个叶子构件或树枝构件
    void remove(Component *component){
        delete component;
        componentArrayList.removeOne(component);
    }
    //获得分支下的所有叶子构件和树枝构件
    QList<Component *> getChildren(){
        return componentArrayList;
    }
//构件容器
private:
    QList<Component *> componentArrayList;
};
#endif // COMPOSITE_H
