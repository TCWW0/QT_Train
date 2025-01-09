#include "strategy.h"

void StepExecution::setParameters(QEventLoop* loop, QTimer* timer)
{
    Q_UNUSED(timer);
    this->loop=loop;
    this->timer=timer;
}

//事件循环启动，阻塞当前动作，等待操作退出
//由于复用的是连接了计时器的信号，所以这里得提前确保计时器关闭
void StepExecution::execute()
{
    if(this->timer->isActive())
    {
        this->timer->stop();
    }
    if(loop && !loop->isRunning())
    {
        loop->exec();
    }
}


void AutoExecution::setParameters(QEventLoop* loop, QTimer* timer)
{
    this->loop=loop;
    this->timer=timer;
}

void AutoExecution::execute()
{
    if(timer)
    {
        timer->start();
        if(loop)loop->exec();
    }
    // this->timer->start();
    // this->loop->exec();
}
