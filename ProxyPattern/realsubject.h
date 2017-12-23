#ifndef REALSUBJECT_H
#define REALSUBJECT_H
#include "subject.h"
#include <QDebug>
class RealSubject : public Subject {
public:
    void request(int num) override {qDebug()<<"hi";}
};
#endif // REALSUBJECT_H
