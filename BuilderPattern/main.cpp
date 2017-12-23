#include "director.h"
int main(int argc, char *argv[]) {
    Director d;
    Product p =d.getAProduct(new ConcreteBuilder());
    p.Show();
}
