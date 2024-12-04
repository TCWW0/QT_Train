#include "heap.h"

heap::heap(QWidget* mainwindow,QGraphicsScene* scene,QGraphicsView* view)
    :readyToBuild(false),
     readyToSort(false),
     mainw(mainwindow),
     Scene(scene),
     View(view),
     time_interval(new QTimer(mainwindow)),
     sortloop(new QEventLoop),
     pauseloop(new QEventLoop)
{
    time_interval->setInterval(1000);//设置时间间隔为1000ms


}

//设置储存结构数组，这里应该是由QLineEdit空间传进来的参数
void heap::setArrayValue(QVector<int> arr)
{
    this->array.clear();
    this->array=arr;            //将arr赋值为类成员

    int n=array.size();
    //建堆，从下往上进行构建
    for(int i=n/2;i>=1;i--)
    {
        DownAdjust(i,n,false);
    }
    /*执行完上面这个后对应着堆的逻辑结构已经建立完成
     *需要注意的是，我们这里使用的是QT的事件循环机制
     *在执行完这一段之后，其实本质上堆排序已经完成了
     *只是在时间循环中，堆积着一系列的事件等待处理
     *接下来通过对一些QEventloop条件的设置来进行动画的播放
    */
}

//对于这个排序，k为当前正在操作的元素的索引，n表示当前的堆的大小
void heap::DownAdjust(int k,int n,bool toshow)
{
    int i=k,j=i*2;                                  //储存当前的位置和当前的逻辑做孩子索引
    while(j<=n){                                    //最多调整到叶节点
        if(j+1<=n&&array[j+1]>array[j])j++;         //去除俩个子孩子中比较大的那一个
        if(array[i]<array[j]){                      //当当前元素不大于俩个子孩子时需要向下调整
            qSwap(this->array[i],this->array[j]);
            i=j;                                    //接下来需要进行位置的转移
            j=i*2;
        }
        else{
            break;
        }
    }
}
