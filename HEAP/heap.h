#ifndef HEAP_H
#define HEAP_H

#include <QWidget>
#include <QGraphicsScene>
#include <QGraphicsView>
#include <QVector>
#include <QTimer>
#include <QEventLoop>//这个结合定时器实现动画的播放

#include "node.h"

/*对于这个排序类的动画设计
 * 选择在进行基础的堆排序第一次整体构建是不会去进行动画的构建的
 * 当构建完大顶堆要开始逐渐排除时，会开始动画的渲染
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



};

#endif // HEAP_H
