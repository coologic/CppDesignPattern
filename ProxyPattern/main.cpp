#include "realsubject.h"
#include "proxy.h"
int main(int argc, char *argv[]) {
    Proxy p;
    p.request(10);
    p.request(110);
}
