#ifndef HEAP_H
#define HEAP_H

//这个类其实就是我们的发布者类
/* 一开始我是想自己搓一套观察者机制来实现的
 * 但是既然QT中有信号与槽机制啊
 * 我完全可以利用这个机制去简化发布者的创建
 */

#include <QEventLoop>
#include <QTimer>
#include <QObject>
#include <memory.h>
#include "observer.h"
#include "strategy.h"

//通过一个构造函数去进行各个观察者动作的连接
class heap:public QObject
{
    Q_OBJECT
public:
    heap();

private:
    QVector<int> array;

    bool readytoBuild;                    //标志是否可以开始建堆
    bool readytoSort;                     //标志是否可以开始排序

    QEventLoop* pauseloop;                      //暂停事件
    QTimer* time_interval;                      //延时
    QEventLoop* loop;                           //排序事件
public:
    void setArrayValue(QVector<int>arr);        //设置数组的值
    int getArraySize();                         //获取当前array大小

    void AdjustHeap(int k,int n,bool toshow);   //调整大顶堆
    void HeapSort();                            //堆排序

    bool isreadytoBuild();                      //返回能否建堆
    bool isreadytoSort();                       //返回能否排序
    bool isLoopRunning();                       //返回主事件循环状态
    bool isPauseLoopRunning();                  //返回暂停事件循环状态

    void AnimationPlay();                        //排序动画播放
    void AnimationPause();                       //排序动画暂停

    void stopLoopRunning();                      //退出loop的事件循环

signals:
    void renderArray(int k);                    //渲染数组函数
    void renderNodes(int k);                    //渲染堆的结构
    void renderSwap(int index1,int index2);     //渲染交换动画

    void swapNodeValue(int i,int j);            //进行逻辑节点值的交换
    void updateNodesValue(QVector<int> res);
    void setTextAlign(QGraphicsTextItem* t);    //设置文本格式

private:
    std::unique_ptr<Strategy>executionStrategy; //当前执行的策略

public:
    void setExecutionStrategy(std::unique_ptr<Strategy> strategy); // 设置执行策略
    void executeCurrentStep(); // 调用策略执行

    // 方便策略模式使用，不应该向用户暴露，之后会先去优化设计的，这里这种其实很危险
    QEventLoop* getLoop() const { return loop; }
    QTimer* getTimeInterval() const { return time_interval; }
};

#endif // HEAP_H
