#ifndef PROXY_H
#define PROXY_H
#include <QDebug>
#include "subject.h"
#include "realsubject.h"
class Proxy : public Subject {
public:
    //支持自定义具体场景
    Proxy(Subject *subject = nullptr){
        if(subject != nullptr)
            subject_ = subject;
        else
            subject_ = new RealSubject;
    }
    //在原有逻辑外代理对num做了过滤，筛掉了<=100的值
    void request(int num) {
        if(num > 100)
            subject_->request(num);
        else
            qDebug()<<"not good num";
    }
private:
    Subject *subject_ = nullptr;
};
#endif // PROXY_H
