#ifndef CONCRETEHANDLER_H
#define CONCRETEHANDLER_H
#include "handler.h"
#include "level.h"
#include "response.h"
class ConcreteHandler1 : public Handler {
protected:
    Response echo(Request *request) override {
        qDebug()<<"Handler1 echo request";
        //处理请求并返回结果
        return Response();
    }
    //设置自己的处理级别
    Level getHandlerLevel() override {
        return Level1;
    }
};
class ConcreteHandler2 : public Handler {
protected:
    Response echo(Request *request) override {
        qDebug()<<"Handler2 echo request";
        return Response();
    }
    Level getHandlerLevel() override {
        return Level2;
    }
};
class ConcreteHandler3 : public Handler {
protected:
    Response echo(Request *request) override {
        qDebug()<<"Handler3 echo request";
        return Response();
    }
    Level getHandlerLevel() override {
        return Level1;
    }
};
#endif // CONCRETEHANDLER_H
