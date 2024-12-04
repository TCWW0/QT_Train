#include "node.h"

//在这里对这个节点类的属性进行设置

//节点颜色设置
QColor node::normal_color = QColor(0xCC, 0xCC, 0xCC);  // #CCCCCC
QColor node::chosen_color = QColor(0x60, 0x3B, 0xE6);  // #603BE6
QColor node::chosen_bg_color = QColor(0xF2, 0xEB, 0xFF);  // #F2EBFF
QColor node::txt_color = QColor(0x78, 0x78, 0x78);  // #787878
QColor node::sorted_color = QColor(0xFF, 0xE4, 0x89);  // #FFE489

//15个结点在画布上的位置
int node::posx[15]={795,555,1035,435,675,915,1155,375,495,615,735,855,975,1095,1215};
int node::posy[15]={30,160,160,290,290,290,290,420,420,420,420,420,420,420,420};

node::node() {}

void node::setValue(int val)
{
    this->value=val;
}

int node::getValue()
{
    return this->value;
}

void node::setPos(int posx,int posy)
{
    this->pos=QPointF(posx,posy);
}

QPointF node::getPos()
{
    return this->pos;
}
