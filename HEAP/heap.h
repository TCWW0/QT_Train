#ifndef HEAP_H
#define HEAP_H

#include <QObject>
#include <QWidget>

#include <QVector>
#include <QTimer>
#include <QEventLoop>//这个结合定时器实现动画的播放

#include <QGraphicsScene>
#include <QGraphicsView>
#include <QGraphicsLineItem>
#include <QGraphicsEllipseItem>
#include <QGraphicsTextItem>
#include <QTextBlockFormat>
#include <QTextCursor>
#include <QPen>
#include <QFont>
#include <QString>
#include <QPropertyAnimation>

#include "node.h"

/*对于这个排序类的动画设计
 * 选择在进行基础的堆排序第一次整体构建是不会去进行动画的构建的
 * 当构建完大顶堆要开始逐渐排除时，会开始动画的渲染
 */

/* 我们在这里对这里的时间循环类进行分析，其实也就是上面的那段的补充
 * 对于QT的事件循环类（QEventLoop），其实这个有点像底层信号那边的机制
 * 对于一个循环类的启动(exec)，这个其实就像信号那边的pause函数
 * 一直阻塞当前程序的执行直到受到一个信号，在QT中这个信号就是对应类的quit函数信号
 * 当接收到这个信号后，程序解除阻塞，并继续执行接下来的代码
 * 对于这里的阻塞，需要注意的是，我们并没有进行对于线程的分离
 * 也就是说，我们这里的事件循环创建，其实还是在主线程上的
 * 也就是说，我们这里的时间循环其实是会阻塞主线程的事件处理的
 */

class heap
{
public:
    heap(QWidget* mainwindow,QGraphicsScene* scene,QGraphicsView* view);

private:
    QVector <int> array;            //堆排序的底层储存结构
    node nodes[15];                 //排序的逻辑结构也是渲染结构

    bool readyToBuild;              //标志当前是否可以进行建堆
    bool readyToSort;               //标志是否可以进行堆元素的调整

    QWidget* mainw;                 //将其挂到的主窗口
    QGraphicsScene* Scene;          //将其挂到主窗口的scene上
    QGraphicsView* View;            //本类的图像挂起地

    QTimer* time_interval;          //定时器延时
    QEventLoop* sortloop;           //排序事件
    QEventLoop* pauseloop;          //暂停事件

public:
    void setArrayValue(QVector<int> arr);       //设置数组的值
    int getArraySize();                         //获取当前Arrary大小

    void HeapSort();                            //数组为类成员不需要传递
    void DownAdjust(int k,int n,bool toshow);   //k为当前调整元素索引，n为当前堆元素数量

    bool isReadyToBuild();                      //判断是否可以建堆
    bool isReadyToSort();                       //判断是否可以排序
    bool isLoopRunning();                       //判断主事件循环状态
    bool isPauseRunning();                      //判断暂停时间循环状态

    //动画块
    void renderNodes(int k);                    //渲染完全二叉树前k个节点
    void renderSwap(int swap1,int swap2);       //渲染在比较交换时的俩个节点
    void renderArray(int k);                    //渲染当前的排序结果的储存结构
    void animationPlay();                       //排序动画的播放(暂停后播放)
    void animationPause();                      //排序动画的暂停(播放时暂停)

    void swapNodeValue(int i,int j);            //交换俩个节点的文本值
    QPointF getNodePos(int i);                  //获取第i个节点的位置

public:
    void setTextAlign(QGraphicsTextItem* t);    //设置文本的属性
};

#endif // HEAP_H


