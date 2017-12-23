#ifndef HANDLER_H
#define HANDLER_H
#include "request.h"
#include "response.h"
class Handler {
private:
    Handler *nextHandler;
//每个处理者都必须对请求做出处理
public:
     virtual Response handleMessage(Request *request) final{
        Response response;
        //判断是否是自己的处理级别
        if(getHandlerLevel() == request->getRequestLevel()){
            response = echo(request); 
        } else { //不属于自己的处理级别
        }
        //判断是否有下一个处理者
        //注意此处如果已经符合了级别并处理完成了消息还会继续向下传
        //若只需要当前级别消息被一次处理只需要将下属判断你放到上面的else内
        if(nextHandler != nullptr){
            response = nextHandler->handleMessage(request);
        } else {//没有其他的处理者
        }
        return response;
    }
     //设置下一个处理者是谁
    void setNext(Handler *handler) {
        nextHandler = handler;
    }
protected:
    //每个处理者都有一个处理级别
    virtual Level getHandlerLevel() = 0;
    //每个处理者都必须实现处理任务
    virtual Response echo(Request *request) = 0;
};
#endif // HANDLER_H
