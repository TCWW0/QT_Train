#include "heapmanage.h"

heapManage::heapManage(QWidget* window,QGraphicsScene* Scene,QGraphicsView* View)
:   HEAP(new heap),
    heapVisual(new HeapObserver(window,Scene,View))
{
    connectInit();
}

void heapManage::connectInit()
{
    QObject::connect(this->HEAP,&heap::renderArray,this->heapVisual,&HeapObserver::renderArray);
    QObject::connect(this->HEAP,&heap::renderNodes,this->heapVisual,&HeapObserver::renderNodes);
    QObject::connect(this->HEAP,&heap::renderSwap, this->heapVisual,&HeapObserver::renderSwap);
    QObject::connect(this->HEAP,&heap::swapNodeValue,this->heapVisual,&HeapObserver::swapNodeValue);
    QObject::connect(this->HEAP,&heap::updateNodesValue,this->heapVisual,&HeapObserver::setNodesValue);
    QObject::connect(this->HEAP,&heap::setTextAlign,this->heapVisual,&HeapObserver::setTextAlign);
}

bool heapManage::isPauseLoopRunning()
{
    return this->HEAP->isPauseLoopRunning();
}
bool heapManage::isreadytoSort()
{
    return this->HEAP->isreadytoSort();
}
bool heapManage::isreadytoBuild()
{
    return this->HEAP->isreadytoBuild();
}
void heapManage::AnimationPlay()
{
    this->HEAP->AnimationPlay();
}
void heapManage::AnimationPause()
{
    this->HEAP->AnimationPause();
}
bool heapManage::isLoopRunning()
{
    return this->HEAP->isLoopRunning();
}
void heapManage::renderNodes(int k)
{
    this->heapVisual->renderNodes(k);
}
void heapManage::renderArray(int k)
{
    this->heapVisual->renderArray(k);
}
int heapManage::getArraySize()
{
    return this->HEAP->getArraySize();
}
void heapManage::setArrayValue(QVector<int> res)
{
    this->HEAP->setArrayValue(res);
}

void heapManage::HeapSort()
{
    this->HEAP->HeapSort();
}
