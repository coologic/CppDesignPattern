#ifndef CPP11_SIGLETON_H
#define CPP11_SIGLETON_H
#include <QDebug>
//C++11的单例实现
//c++11自动处理静态成员初始化竞争，是线程安全的
template <typename T>
class Cpp11Sigleton {
public:
    static T *GetInstance() {
        static T instance;
        return &instance;
    }
};
class TestCpp11Sigleton {
    friend class Cpp11Sigleton<TestCpp11Sigleton>;
private:
    TestCpp11Sigleton(){qDebug()<<"created"<<this;}
};
#endif // CPP11_SIGLETON_H
