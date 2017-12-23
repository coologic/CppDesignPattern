#ifndef RECEIVER_H
#define RECEIVER_H
class Receiver {
    //抽象接收者， 定义每个接收者都必须完成的业务
public:
    virtual ~Receiver() { }
    virtual void doSomething() = 0;
};
#endif // RECEIVER_H
