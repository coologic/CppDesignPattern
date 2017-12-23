#ifndef REQUEST_H
#define REQUEST_H
#include "level.h"
class Request {
public:
    virtual Level getRequestLevel() = 0;
};
class Request1 : public Request{
public:
    Level getRequestLevel() override {
        return Level1;
    }
};
class Request2 : public Request{
public:
    Level getRequestLevel() override {
        return Level2;
    }
};
#endif // REQUEST_H
