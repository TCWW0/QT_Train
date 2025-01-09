#ifndef HEAPMANAGE_H
#define HEAPMANAGE_H

//在这个类中，使用外观模式来进行我们堆排序的数据模块和渲染模块的连接
//在这里，我们会进行连接信号与槽之间的连接

/* 为什么要通过外观模式来进行呢
 * 这里的外观模式其实看起来很多余
 * 但是这里主要是由于QT中信号与槽的连接需要俩边都具有实例化
 * 要是直接在数据模块中进行连接，需要保留一个渲染模块的引用
 * 要是这么做，俩个模块之间会是一种聚合的关系
 * 那我们前面全部的解耦其实就没有什么意义了
 * 我们要的就是俩个完全独立的模块
 * 通过这里的外观来进行解耦，俩个模块将不会存在直接的联系
 * 而且这种保留信号的操作其实也很符合开放封闭原则
 */

#include "heap.h"

class heapManage
{
public:
    heapManage(QWidget* window,QGraphicsScene* Scene,QGraphicsView* View);

private:
    heap* HEAP;
    HeapObserver* heapVisual;

    //当前执行策略
    std::unique_ptr<Strategy> execution;

    //初始化连接
    void connectInit();

public:
    //在这里进行外观模式的一系列缓冲接口定义
    bool isPauseLoopRunning();
    bool isreadytoSort();
    bool isreadytoBuild();
    void AnimationPlay();
    void AnimationPause();
    void stopLoopRunning();
    bool isLoopRunning();
    void renderNodes(int k);
    void renderArray(int k);
    void setArrayValue(QVector<int> res);
    int getArraySize();
    void HeapSort();
    void setExecutionStrategy(std::unique_ptr<Strategy> strategy);
};

#endif // HEAPMANAGE_H
