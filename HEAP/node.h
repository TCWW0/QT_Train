#ifndef NODE_H
#define NODE_H

#include <QPointF>
#include <QColor>

//这个类是堆排序的对应节点类
//由于这个类是要嵌入到堆排序实现类中的，所以这个类的大多属性得设置为共有
//由于节点类的很多属性是一致的，所以考虑使用静态常量来统一

//因为设计问题，我们直接使用15个节点来储存这个堆
//我们在输入时就限定了我们输入的情况了
class node
{
public:
    node();

private:
    int value;//节点值
    QPointF pos;//节点在画布中的位置

public:
    static int normal_radius;       //各个节点的半径
    static QColor normal_color;     //待排序未被选中的节点的颜色
    static QColor chosen_color;     //待排序被选择的节点的颜色
    static QColor chosen_bg_color;  //已排序的节点颜色
    static QColor txt_color;       //文本的颜色
    static QColor sorted_color;
    static int posx[15];
    static int posy[15];

public:
    void setValue(int val);         //设置当前节点的值
    int getValue();                 //获取当前节点的值
    void setPos(int posx,int posy); //设置当前节点位置
    QPointF getPos();               //获取当前节点位置
};

#endif // NODE_H
