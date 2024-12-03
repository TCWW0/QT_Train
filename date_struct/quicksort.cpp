#include "quicksort.h"

QuickSort::QuickSort(QGraphicsScene *scene, QTextEdit *debugOutputWidget):
    ArrayBasic(scene,debugOutputWidget)
{
    //对于对应的枢轴的元素的矩形渲染
    pivotRect=new QGraphicsRectItem(0,0,25,25);
    pivotRect->setBrush(Qt::NoBrush);
    QPen pen (Qt::black);
    pen.setWidth(2);
    pivotRect->setPen(pen);

    //将这个文本项挂到对应的枢轴矩形中
    pivotText=new QGraphicsTextItem("0",pivotRect);
    pivotText->setDefaultTextColor(Qt::black);
    pivotText->setPos(5,1);
    myscene->addItem(pivotRect);
}

//l,r是用来划分左右区间的
void QuickSort::Quicksort(int l,int r)
{
    /*以下俩种情况是需要退出递归的条件
     * 刚好集成到条件判断中
     * 当区间为一个元素时，l==r
     * 区间没有元素时,l>r
     */
    if (myArray.isEmpty()) {
        qDebug() << "排序数组为空，无法执行排序";
        return;  // 防止在空数组上排序
    }
    if(l<r&&l>=0)
    {
        int i=Partition(l,r);//划分
        Quicksort(l,i-1);//枢轴的左区间
        Quicksort(i+1,r);//枢轴的右区间
    }
}

int QuickSort::Partition(int l,int r)
{
    //通过使用下面俩行和更改最后的赋值逻辑可以使用去中间元素为枢轴

    // int pivotloc=(l+r)/2;
    // swap(myArray[l],myArray[pivotloc]);
    int pivot=myArray[l];//这里选择每个区间的第一个元素作为枢轴
    //highlightPrivot(pivot);//修改为对应的枢轴元素
    // QString words=QString("当前操作的基准枢轴为: %1 ").arg(pivot);
    // updateDebugOutput(words);
    // modifyElement(l,0);//将枢轴位置置为0表示坑位
    while(l<r)
    {
        //在右区间内去找到第一个小于枢轴元素的位置
        while(l<r&&myArray.at(r)>=pivot)r--;
        if(l<r){
            // highLightRectangle(l,Qt::red);
            // highLightRectangle(r,Qt::red);
            // QString temp=QString("\t当前要交换的俩个元素为 %1 %2").arg(myArray.at(l)).arg(myArray.at(r));
            // updateDebugOutput(temp);
            //Swap(l,r);//替换下面这个方法进行交换
            // rectItem[l]->setBrush(Qt::black);//颜色归还
            // rectItem[r]->setBrush(Qt::black);
            myArray[l]=myArray.at(r);//将右边第一个小于的元素移动到左边坑中
        }

        //将上面这一行修改为会进行数组数据，矩形项，文本项都进行交换的交换

        //这里将这个左指针进行左移，毕竟经过交换后这个l指向的元素一定<=枢轴
        //在左区间内去找到第一个大于枢轴元素的位置
        while(l<r&&myArray.at(l)<=pivot)l++;
        if(l<r){
            // highLightRectangle(l,Qt::red);
            // highLightRectangle(r,Qt::red);
            // QString temp=QString("\t当前要交换的俩个元素为 %1 %2").arg(myArray.at(l)).arg(myArray.at(r));
            // updateDebugOutput(temp);
            //Swap(r,l);
            // rectItem[l]->setBrush(Qt::black);//颜色归还
            // rectItem[r]->setBrush(Qt::black);
            myArray[r]=myArray.at(l);
        }

        // QString temp=QString("区间[%1,%2]查找完毕").arg(l).arg(r);
        // updateDebugOutput(temp);
    }
    //对swap的元素进行一点优化可以实现一定的效率优化，但是不多，而且其实效率也跟现在的差不多
    //modifyElement(l,pivot);
    //将枢轴位置元素插入，构建完一个过程的结构
    //myArray[l]=pivot;
    return l;//返回的是哨兵在数组中的位置
}

void QuickSort::highlightPrivot(int pivot)
{
    pivotText->setPlainText(QString::number(pivot));
    //myscene->addItem(pivotRect);
}

void QuickSort::specialSort()
{
    int endp=myArray.size();
    if(myArray.empty())
    {
        qDebug() << "排序数组为空，无法执行排序";
        return;
    }
    if (rectItem.isEmpty()) {
        qDebug() << "矩形项为空，无法执行排序";
        return;
    }
    Quicksort(0,endp);
}
