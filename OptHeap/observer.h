#ifndef OBSERVER_H
#define OBSERVER_H

//情况有变，但我不想对这个类进行删除，毕竟这也是一个相对不错的板子了
//就是这里面的统一接口变得没有意义了，因为我使用了信号与槽机制

#include <QVariant>
#include <QWidget>
#include <QGraphicsView>
#include <QGraphicsScene>
#include <QDebug>
#include <QGraphicsTextItem>
#include <QGraphicsEllipseItem>
#include <QPropertyAnimation>
#include <QEasingCurve>
#include <QTextBlockFormat>
#include <QTextCursor>
#include <QObject>

#include "node.h"

//动作类型枚举
// enum class heapAction{
//     ArrayEdit,
//     ArrayShow,
//     HeapChange,
//     NodesSwapRen,
//     NodesValueSwap
// };

// //使用一层封装使得参数更加容易解析，也方便以后的扩展
// //参数类型必须是一个动作枚举类型再加上对应的参数数组（vector外形）
// struct RenderEvent{
//     heapAction actionType;
//     QVariant data;
// };

// //这个类不复杂任何功能，只是提供一个接口规范
// class observer:public QObject
// {
//     Q_OBJECT
// public:
//     observer()=default;
//     virtual ~observer()=default;

//     //通用的事件通知接口，所有的操作只需要通过一个统一的接口即可
//     virtual void onNotify(const RenderEvent& event)=0;
// };

/* 通过onNotfy进行解析
 * 第一个参数应该是确定调用方法
 * 剩余参数用作调用参数
 */

/* 这个类就是我们的观察者类，对应的是解耦后的渲染模块类
 * 在这个类中，我们使用统一的接口进行调用
 * 在接口内部进行参数表的解析并调用对应的函数，封装细节
 * 这个观察者类会挂到对应的窗口上来实现对应的渲染操作
 * 由于之前的已经做过一遍，所以主要考虑数据移植这一块的冲突
 * 代码设计这块之前已经做过了
 */
class HeapObserver :public QObject
{
    Q_OBJECT
public:
    HeapObserver(QWidget* window,QGraphicsScene* Scene,QGraphicsView* View);
    ~HeapObserver();

public slots:
    // 渲染整个数组，通常在数组状态发生变化时调用
    void renderArray(int k);

    // 渲染前k个节点
    void renderNodes(int k);

    // 渲染两个节点的交换动画
    void renderSwap(int index1, int index2);

    //设置文本格式
    void setTextAlign(QGraphicsTextItem* t);

    //一些辅助函数
    void swapNodeValue(int i,int j);        //用于节点值的交换

    //更新我们当前储存的节点的节点值
    void setNodesValue(QVector<int> res);

// public:
//     void onNotify(const RenderEvent& event);

private:
    QVector<int> localArray;    //本地保留一份数据副本方便操作
    QWidget* mainw;             //程序主页面窗口，渲染父窗口
    QGraphicsScene* m_scene;    //渲染挂起地
    QGraphicsView* m_view;      //渲染窗口
    node nodes[15];             //这个就是我们渲染模块需要做的渲染对象
};

//对于这个渲染模块，我们需要一个简单的使用说明，毕竟我们只负责提供接口
/* 通过统一的接口来调用渲染模块，只要那你在参数中标明了你的动作即可
 * renderArray函数额外接受一个整形参数用作渲染整个数组
 * 这个参数是当前未排序的节点数
 * renderNodes函数额外接受一个整形参数
 * 这个参数是当前需要渲染的节点个数
 * renderSwap函数额外接受俩个整形参数
 * 这俩个参数是进行交换的节点的索引
 * 在调用这个模块函数时，请使用RenderEvent结构体进行参数构建
 * 确保参数正确设计以防止错误的调用
 */

#endif // OBSERVER_H
