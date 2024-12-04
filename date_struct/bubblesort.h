#ifndef BUBBLESORT_H
#define BUBBLESORT_H

#include "arraybasic.h"

//接下来我们的排序将会通过QTimer来进行动画的显示
//给每个对象添加一个计时器，当对应的计时器到时触发一次排序操作

class BubbleSort : public ArrayBasic
{
    Q_OBJECT
public:
    BubbleSort(QGraphicsScene *scene, QTextEdit *debugOutputWidget);
    void bubblesort();
    void specialSort();
    void onSortStep();

private:
    int currentStep;//内层循环步骤
    int outerStep;//外层循环步骤
    QTimer *timer;
};

#endif // BUBBLESORT_H
