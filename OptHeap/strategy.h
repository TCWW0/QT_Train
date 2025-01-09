#ifndef STRATEGY_H
#define STRATEGY_H

#include <QEventLoop>
#include <QTimer>

//这是我们的抽象策略类，不需要给它实例
class Strategy
{
public:
    Strategy()=default;
    virtual void execute()=0;   //子类定义对应的执行逻辑，同时定义接口规范
    virtual void setParameters(QEventLoop* loop, QTimer* timer) = 0; // 设置上下文
    virtual ~Strategy() = default;
};

//单步执行逻辑
class StepExecution : public Strategy
{
private:
    QEventLoop* loop;
    QTimer* timer;
public:
    void setParameters(QEventLoop* loop, QTimer* timer)override;
    void execute() override ;
};

//自动执行策略    使用定时器控制逻辑流动
class AutoExecution : public Strategy {
private:
    QEventLoop* loop;
    QTimer* timer;
public:
    void setParameters(QEventLoop* loop, QTimer* timer) override;
    void execute() override;
};

#endif // STRATEGY_H
