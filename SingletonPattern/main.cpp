#include <cpp11_sigleton.h>
#include <thread>
int main(int argc, char *argv[]) {
    std::thread t1(Cpp11Sigleton<TestCpp11Sigleton>::GetInstance);
    t1.detach();
    std::thread t2(Cpp11Sigleton<TestCpp11Sigleton>::GetInstance);
    t2.detach();
    std::thread t3(Cpp11Sigleton<TestCpp11Sigleton>::GetInstance);
    t3.detach();
    std::thread t4(Cpp11Sigleton<TestCpp11Sigleton>::GetInstance);
    t4.detach();
    Cpp11Sigleton<TestCpp11Sigleton>::GetInstance();
    Cpp11Sigleton<TestCpp11Sigleton>::GetInstance();
    Cpp11Sigleton<TestCpp11Sigleton>::GetInstance();
    Cpp11Sigleton<TestCpp11Sigleton>::GetInstance();
}
