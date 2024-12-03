#ifndef QUICKSORT_H
#define QUICKSORT_H

#include <QObject>
#include "arraybasic.h"

//系列子类的构造函数暂时不需要进行扩展

/*
 * 这里需要来分析下快排的性质来进行渲染的分析
 * 快排首先是确定一个哨兵元素，然后依次找到哨兵左边最大和哨兵右边最小元素并进行交换
 * 因此，我们渲染时要先确定一个哨兵元素高亮特定颜色，然后找到左边最大和右边最小的俩元素进行渲染
 * 然后这俩渲染并交换
 * 接下来还需要去找下一次的哨兵元素并继续上面的步骤
*/

//这里的快排使用挖坑法，使用每个区间的第一个元素作为枢轴
class QuickSort : public ArrayBasic
{
public:
    QuickSort(QGraphicsScene *scene, QTextEdit *debugOutputWidget);
    void specialSort();//这个是对应子类的排序函数以及对应的高亮方法
    void Quicksort(int l,int r);
    int Partition(int l,int r);//寻找枢轴位置
    void highlightPrivot(int pivot);//单独渲染这个枢轴元素
private:
    QGraphicsRectItem *pivotRect;//用于枢轴元素的渲染，整个排序过程中维护
    QGraphicsTextItem *pivotText;//用于枢纽元素的值的渲染
};

#endif // QUICKSORT_H
