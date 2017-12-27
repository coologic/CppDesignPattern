#include "element.h"
#include "objectstruture.h"
#include "visitor.h"
int main(int argc, char *argv[]) {
    for(int i=0;i<10;i++){
    //获得元素对象
        Element *el = ObjectStruture::createElement();
    //接受访问者访问
        el->accept(new Visitor());
        delete el;
    }
}
