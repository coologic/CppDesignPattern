#ifndef COMMAND_H
#define COMMAND_H
class Command {
//每个命令类都必须有一个执行命令的方法
public:
    virtual void execute() = 0;
};
#endif // COMMAND_H
