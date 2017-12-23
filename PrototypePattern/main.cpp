#include "concreteprototype.h"
int main(int argc, char *argv[]) {
    Prototype *p = new ConcretePrototype();
    Prototype *p2 = p->Clone();
}
