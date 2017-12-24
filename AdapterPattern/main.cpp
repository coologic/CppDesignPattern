#include "adapter.h"
#include "concretetarget.h"
int main(int argc, char *argv[]) {
    Target *target = new ConcreteTarget();
    target->request();
    //现在增加了适配器角色后的业务逻辑
    Target *target2 = new Adapter();
    target2->request();
}
