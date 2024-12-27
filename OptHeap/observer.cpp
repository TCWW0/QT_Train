#include "observer.h"

HeapObserver::HeapObserver(QWidget* window,QGraphicsScene* Scene,QGraphicsView* View)
    :mainw(window),m_scene(Scene),m_view(View)
{}

HeapObserver::~HeapObserver()
{
    delete m_scene;
    delete m_view;
}

//在这个函数接口中，进行了参数的解析，实现了通过一个统一的接口来实现调用
// void HeapObserver::onNotify(const RenderEvent& event)
// {
//     switch(event.actionType)
//     {
//         //同步本地数组副本
//         case heapAction::ArrayEdit:
//             this->localArray=event.data.value<QVector<int>>();
//             break;
//         //当屏幕上数组需要重新渲染时
//         case heapAction::ArrayShow:
//             renderArray(event.data.toInt());
//             break;
//         //当堆的结构需要重新渲染时
//         case heapAction::HeapChange:
//             renderNodes(event.data.toInt());
//             break;
//         //当堆本身的节点数据需要进行交换时
//         case heapAction::NodesValueSwap:{
//             auto indices = event.data.value<QPair<int, int>>();
//             swapNodeValue(indices.first,indices.second);
//             break;
//         }
//         //当堆进行交换操作需要渲染时
//         case heapAction::NodesSwapRen: {
//             auto indices = event.data.value<QPair<int, int>>();
//             renderSwap(indices.first, indices.second);
//             break;
//         }
//         default:
//             qDebug()<<"Unknown action";
//     }
// }

void HeapObserver::renderArray(int k)
{
    for(int i=0;i<15;++i){
        //矩形框
        QGraphicsRectItem* rectitem=new QGraphicsRectItem;
        rectitem->setRect(-30,-20,60,40);
        rectitem->setPos(QPointF(370+i*60,-50));
        rectitem->setPen(QColor("#ABABAB"));
        if(i>=this->localArray.size()){//未使用
            rectitem->setBrush(QBrush(QColor("#f5f5f5")));
            this->m_scene->addItem(rectitem);
        }
        else{
            //文字
            QGraphicsTextItem* t=new QGraphicsTextItem();
            t->setFont(QFont("Arial Black",13,false));
            t->setPos(QPointF(340+i*60,-65));
            t->setPlainText(QString::number(this->nodes[i].getValue()));
            t->setTextWidth(60);
            setTextAlign(t);

            if(i>=k){//已排序好
                rectitem->setBrush(QBrush(node::sorted_color));
                t->setDefaultTextColor(QColor("#ABABAB"));
            }
            else
                t->setDefaultTextColor(QColor("black"));

            this->m_scene->addItem(rectitem);
            this->m_scene->addItem(t);

        }
    }
}

void HeapObserver::renderNodes(int k)
{
    //清除原有的资源
    m_scene->clear();
    //先画连线
    for(int i=0;i<k;i++){
        //孩子结点和父结点相连
        QPointF parentpos,childpos;
        if(i){
            childpos=this->nodes[i].getPos();
            parentpos=this->nodes[(i-1)/2].getPos();
            QGraphicsLineItem* lineitem=new QGraphicsLineItem;
            lineitem->setPen(QPen(QColor(node::normal_color),3));
            lineitem->setPos(parentpos);
            lineitem->setLine(0,0,childpos.x()-parentpos.x(),childpos.y()-parentpos.y());

            m_scene->addItem(lineitem);
        }
    }

    //再画结点
    for(int i=0;i<k;++i){
        //结点圆圈
        QGraphicsEllipseItem* nodeitem=new QGraphicsEllipseItem;
        nodeitem->setRect(-node::normal_radius,-node::normal_radius,2*node::normal_radius,2*node::normal_radius);
        nodeitem->setPos(this->nodes[i].getPos());
        nodeitem->setPen(QPen(QColor(node::normal_color),3));//外围边框
        nodeitem->setBrush(QColor("white"));//内部实心圆圈

        m_scene->addItem(nodeitem);

        //结点文字
        QGraphicsTextItem* t=new QGraphicsTextItem;
        t->setFont(QFont("Arial Black",9,false));
        t->setPos(this->nodes[i].getPos().x()-node::normal_radius,this->nodes[i].getPos().y()-13);
        t->setPlainText(QString::number(this->nodes[i].getValue()));
        t->setDefaultTextColor(node::txt_color);
        t->setTextWidth(2*node::normal_radius);
        setTextAlign(t);

        m_scene->addItem(t);
    }

    this->m_view->setRenderHint(QPainter::Antialiasing);
    this->m_view->setScene(this->m_scene);
}

//进行节点动画的渲染
void HeapObserver::renderSwap(int index1, int index2)
{
    QGraphicsEllipseItem* s1=new QGraphicsEllipseItem;
    QGraphicsEllipseItem* s2=new QGraphicsEllipseItem;
    s1->setRect(-node::normal_radius,-node::normal_radius,2*node::normal_radius,2*node::normal_radius);
    s2->setRect(-node::normal_radius,-node::normal_radius,2*node::normal_radius,2*node::normal_radius);
    s1->setPos(this->nodes[index1].getPos());
    s2->setPos(this->nodes[index2].getPos());
    s1->setPen(QPen(QColor(node::chosen_color),3));//外围边框
    s2->setPen(QPen(QColor(node::chosen_color),3));//外围边框
    s1->setBrush(QBrush(QColor(node::chosen_bg_color)));
    s2->setBrush(QBrush(QColor(node::chosen_bg_color)));

    QGraphicsTextItem* t1=new QGraphicsTextItem;
    t1->setFont(QFont("Arial Black",9,false));
    t1->setPos(this->nodes[index1].getPos().x()-node::normal_radius,this->nodes[index1].getPos().y()-13);
    t1->setPlainText(QString::number(this->nodes[index1].getValue()));
    t1->setDefaultTextColor(node::chosen_color);
    t1->setTextWidth(2*node::normal_radius+1);
    setTextAlign(t1);

    QGraphicsTextItem* t2=new QGraphicsTextItem;
    t2->setFont(QFont("Arial Black",9,false));
    t2->setPos(this->nodes[index2].getPos().x()-node::normal_radius,this->nodes[index2].getPos().y()-13);
    t2->setPlainText(QString::number(this->nodes[index2].getValue()));
    t2->setDefaultTextColor(node::chosen_color);
    t2->setTextWidth(2*node::normal_radius);
    setTextAlign(t2);

    m_scene->addItem(s1);
    m_scene->addItem(s2);

    m_scene->addItem(t1);
    m_scene->addItem(t2);

    //交换动画
    QPointF pos1=QPointF(nodes[index1].getPos().x()-node::normal_radius,nodes[index1].getPos().y()-13);
    QPointF pos2=QPointF(nodes[index2].getPos().x()-node::normal_radius,nodes[index2].getPos().y()-13);


    QPropertyAnimation* a1=new QPropertyAnimation(t1,"pos");
    a1->setEasingCurve(QEasingCurve::InOutBounce);
    a1->setDuration(400);
    a1->setStartValue(pos1);
    a1->setEndValue(pos2);

    QPropertyAnimation* a2=new QPropertyAnimation(t2,"pos");
    a2->setEasingCurve(QEasingCurve::InOutBounce);
    a2->setDuration(400);
    a2->setStartValue(pos2);
    a2->setEndValue(pos1);

    a1->start();
    a2->start();
}

//定制一些文本属性
void HeapObserver::setTextAlign(QGraphicsTextItem* t)
{
    QTextBlockFormat format;
    format.setAlignment(Qt::AlignCenter);
    QTextCursor cursor = t->textCursor();
    cursor.select(QTextCursor::Document);
    cursor.mergeBlockFormat(format);
    cursor.clearSelection();
    t->setTextCursor(cursor);
}

void HeapObserver::swapNodeValue(int i,int j)
{
    int tmp=this->nodes[i].getValue();
    this->nodes[i].setValue(this->nodes[j].getValue());
    this->nodes[j].setValue(tmp);
}

void HeapObserver::setNodesValue(QVector<int> res)
{
    this->localArray.clear();
    localArray=res;

    for(int i=0;i<15;i++){
        this->nodes[i].setPos(node::posx[i],node::posy[i]);

        if(i<res.size()){
            this->nodes[i].setValue(res[i]);
        }
        else{//剩余的暂时赋值为0
            this->nodes[i].setValue(0);
        }
    }
}
