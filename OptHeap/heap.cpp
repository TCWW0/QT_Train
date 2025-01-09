#include "heap.h"

//在这里进行一些参数的初始化
//主要是在这里进行我们信号与槽机制的连接使用
heap::heap()
    :readytoBuild(false),readytoSort(false)
{
    this->time_interval=new QTimer();
    time_interval->setInterval(1000);
    this->loop=new QEventLoop;
    this->pauseloop=new QEventLoop;
    QObject::connect(time_interval, &QTimer::timeout, [&]() {
        loop->quit(); // 定时器超时退出事件循环
    });
}

void heap::setArrayValue(QVector<int>arr)
{
    this->array.clear();
    for(auto& i:arr)
    {
        this->array.push_back(i);
    }
    //直接建立大顶堆
    //修改下面这第三个参数可以选择是否渲染堆的最大化过程
    int n=this->array.size();
    for(int i=(n-1)/2;i>=0;i--){
        this->AdjustHeap(i,n,false);
    }
    //可以开始在前端render大顶堆
    this->readytoBuild=true;
    this->readytoSort=true;

    //这里传入的是一个大顶堆的值，如果闯入arr需要再进行跳转
    emit updateNodesValue(this->array);     //将节点数组的值创建交给渲染模块
}

int heap::getArraySize()
{
    return this->array.size();
}

void heap::AdjustHeap(int k,int n,bool toshow)
{
    int i=k;
    int j=2*i+1;//j是i(i是第k层)的孩子
    while(j<n){
        // 在数组边界内, 比较左右孩子，较大的孩子与根节点比较
        if(j<n-1 && this->array[j]<this->array[j+1])
            ++j;
        //渲染i和j的比较

        if(this->array[i]>this->array[j])
            break;
        else{
            //交换
            if(toshow)
                emit renderSwap(i,j);
            qSwap(this->array[i],this->array[j]);
            emit swapNodeValue(i,j);
            if(toshow){
                // time_interval->start();
                // loop->exec();
                this->executeCurrentStep();
                emit renderNodes(n);
                emit renderArray(n);
            }
            i=j;j=2*i+1;
        }
    }
}
void heap::HeapSort()
{
    int n=this->array.size();

    //开始sort之前，调整好的堆顶就是排序的第一个元素
    for(int i=1;i<n;i++){

        emit renderSwap(0,n-i);
        qSwap(this->array[0],this->array[n-i]);
        emit swapNodeValue(0,n-i);

        // time_interval->start();
        // loop->exec();
        this->executeCurrentStep();
        emit renderNodes(n-i);
        emit renderArray(n-i);
        //重新调整为大顶堆
        this->AdjustHeap(0,n-i,true);
    }
    emit renderArray(0);

    this->readytoBuild=false;
    this->readytoSort=false;
}

bool heap::isreadytoBuild()
{
    return this->readytoBuild;
}
bool heap::isreadytoSort()
{
    return this->readytoSort;
}
bool heap::isLoopRunning()
{
    return this->loop->isRunning();
}
bool heap::isPauseLoopRunning()
{
    return this->pauseloop->isRunning();
}

void heap::AnimationPlay(){
    if(this->pauseloop->isRunning()){
        this->pauseloop->quit();
    }
}

void heap::AnimationPause(){
    if(!this->pauseloop->isRunning()){
        this->pauseloop->exec();
    }
}

void heap::stopLoopRunning()
{
    if(this->loop->isRunning())
    {
        this->loop->quit();
    }
}

void heap::setExecutionStrategy(std::unique_ptr<Strategy> strategy)
{
    this->executionStrategy = std::move(strategy);
    if (executionStrategy) {
        executionStrategy->setParameters(loop, time_interval);
    }
}

void heap::executeCurrentStep()
{
    //executionStrategy->execute();
    if(executionStrategy)
    {
        executionStrategy->execute();
    }
    else
    {
        qDebug()<<"当前没有传入策略类实例";
        exit(0);
    }
}
