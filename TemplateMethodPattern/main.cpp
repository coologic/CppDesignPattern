#include "concrete_class.h"
int main(int argc, char *argv[]) {
    AbstractClass *t1 = new ConcreteClass1;
    AbstractClass *t2 = new ConcreteClass2;
    t1->templateMethod();
    t2->templateMethod();
}
