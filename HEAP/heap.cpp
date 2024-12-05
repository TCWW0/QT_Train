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

    //将排序事件循环的退出循环设置为计时器到期，也就是1000ms触发一次
    QObject::connect(time_interval,&QTimer::timeout,[this](){
        sortloop->quit();
    });

    this->readyToBuild= false;
    this->readyToSort = false;
}

//设置储存结构数组，这里应该是由QLineEdit空间传进来的参数
void heap::setArrayValue(QVector<int> arr)
{
    this->array.clear();
    for(auto&i:arr){
        this->array.push_back(i);
    }

    int n=array.size();
    //建堆，从下往上进行构建
    for(int i=(n-1)/2;i>=0;i--)
    {
        DownAdjust(i,n,false);
    }
    /*执行完上面这个后对应着堆的逻辑结构已经建立完成
     *需要注意的是，我们这里使用的是QT的事件循环机制
     *在执行完这一段之后，其实本质上堆排序已经完成了
     *只是在时间循环中，堆积着一系列的事件等待处理
     *接下来通过对一些QEventloop条件的设置来进行动画的播放
    */
    //大顶堆已经构建完毕，接下来要进行对排序的第二步，排序
    //先设置动画状态为可播放
    this->readyToBuild= true;
    this->readyToSort = true;
    //qDebug()<<"当前readyToBuild为"<<readyToBuild;
    int len=this->array.size();
    //给逻辑结构，也是接下来要进行渲染的元素复制
    for (int i=0;i<15;i++) {
        this->nodes[i].setPos(node::posx[i],node::posy[i]);//固定点的位置

        if(i<len)//用户输入的值代表的节点
        {
            this->nodes[i].setValue(this->array[i]);
        }
        else
        {   //使用0进行填充
            this->nodes[i].setValue(0);
        }
    }

}

//对于这个排序，k为当前正在操作的元素的索引，n表示当前的堆的大小
void heap::DownAdjust(int k,int n,bool toshow)
{
    int i=k,j=i*2+1;                                  //储存当前的位置和当前的逻辑做孩子索引
    while(j<n){                                    //最多调整到叶节点
        if(j<n-1&&this->array[j+1]>this->array[j])j++;         //取出俩个孩子中比较大的那一个
        if(array[i]<array[j]){                      //当当前元素不大于俩个子孩子时需要向下调整
            if(toshow)//渲染交换的节点
            {
                this->renderSwap(i,j);
            }
            qSwap(this->array[i],this->array[j]);   //储存结构数组的交换
            this->swapNodeValue(i,j);               //交换对应逻辑结构节点的值

            //在这里已经完成了对于底部数据层的交换了，要考虑渲染层面的进行了
            if(toshow)
            {
                this->time_interval->start();
                sortloop->exec();
                this->renderNodes(n);               //循环退出，重新渲染当前的堆结构
                this->renderArray(k);               //重新渲染当前的储存结构
            }

            i=j;                                    //接下来需要进行位置的转移
            j=i*2+1;
        }
        else{
            break;
        }
    }
}

int heap::getArraySize()
{
    return this->array.size();
}

//堆排序的第二步，排序，此时已经是大顶堆
/*
 * 重新来回顾下堆排序的第二步排序过程，对于这个排序
 * 我们需要知道在启动这个排序时堆已经被调整为了大顶堆的状态
 * 此时我们需要将当前堆顶与最后一个元素进行换位
 * 接着将换位后的最后一个元素从逻辑结构中删除，并添加到储存结构的最后一个位置上
 * 毕竟我们是大顶堆
 * 接着以当前堆顶元素为起点去重新构建其大顶堆的性质，一次循环
 * 在这个函数设计中，我们将会开始进行动画的渲染
 */
void heap::HeapSort()
{
    //需要注意的是,这里的len是元素数量，也就是-1才是对应的索引，别混了
    int len=this->array.size();

    //由于堆排序的性质，最后俩个元素可以不再进入函数判断，省去一个栈帧，这里就从1开始
    for(int i=1;i<len;i++)
    {
        //将堆顶元素跟堆对应的最后一个节点进行交换
        this->renderSwap(0,len-i);
        qSwap(this->array[0],this->array[len-i]);       //交换储存结构
        this->swapNodeValue(0,len-i);

        time_interval->start();                         //前面已经设置间隔这里就空传就行
        sortloop->exec();
        this->renderNodes(len-i);                       //在这里已经是交换完成的，需要更新，就直接省去最后一个节点实现对应可视化
        this->renderArray(len-i);                       //更新对应的储存数组

        //重新调整堆，这次的将会播放动画，也是对于之前的参数的理解位置
        this->DownAdjust(0,len-i,true);
    }
    //当运行到这时，表示整个堆排序已经结束了
    this->renderArray(0);                               //渲染0个数组，这个也是一种关于消失的手法了

    //更新状态，避免一些可能的错误
    this->readyToBuild=false;
    this->readyToSort=false;
}

bool heap::isReadyToBuild()
{
    qDebug()<<"当前readyToBuild为"<<readyToBuild;
    return this->readyToBuild;
}

bool heap::isReadyToSort()
{
    return this->readyToSort;
}

bool heap::isLoopRunning()
{
    return this->sortloop->isRunning();
}

bool heap::isPauseRunning()
{
    return this->pauseloop->isRunning();
}

void heap::renderNodes(int k)               //k为绘画节点个数
{
    this->Scene->clear();

    //树的结构其实可以用树形控件来实现，不过不好管理，这里直接来写吧
    /*先来构建树的边，需要用到完全二叉树的几个性质
     * 假设一个节点的在数组中的索引为i,算了，你应该懂这个
     * 一个节点的左孩子的对应索引就应该是2*i,右孩子索引就应该是2i+1
     * 该节点的父节点的索引就应该是i/2向下取整，由于默认向下取整，所以就是i/2
     * 可以看到，这里从子推父节点是一对一的关系，所以我们考虑从树的第二层去构建边
     * 这样既能一对一的正确构建边，而且能减少构建的复杂度
     */

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

            Scene->addItem(lineitem);
        }
    }
    //画节点，以圆为元素
    for(int i=0;i<k;++i){
        //结点圆圈
        QGraphicsEllipseItem* nodeitem=new QGraphicsEllipseItem;
        nodeitem->setRect(-node::normal_radius,-node::normal_radius,2*node::normal_radius,2*node::normal_radius);
        nodeitem->setPos(this->nodes[i].getPos());
        nodeitem->setPen(QPen(QColor(node::normal_color),3));//外围边框
        nodeitem->setBrush(QColor("white"));//内部实心圆圈

        Scene->addItem(nodeitem);

        //结点文字
        QGraphicsTextItem* t=new QGraphicsTextItem;
        t->setFont(QFont("Arial Black",9,false));
        t->setPos(this->nodes[i].getPos().x()-node::normal_radius,this->nodes[i].getPos().y()-13);
        t->setPlainText(QString::number(this->nodes[i].getValue()));
        t->setDefaultTextColor(node::txt_color);
        t->setTextWidth(2*node::normal_radius);
        setTextAlign(t);

        Scene->addItem(t);
    }

    this->View->setRenderHint(QPainter::Antialiasing);
    this->View->setScene(this->Scene);                                //挂到对应的窗口
}



// 设置文本对齐方式为居中对齐
void heap::setTextAlign(QGraphicsTextItem* t)
{
    // 创建一个 QTextBlockFormat 对象，用于设置文本块的格式
    QTextBlockFormat format;
    // 设置文本块的对齐方式为水平和垂直居中
    format.setAlignment(Qt::AlignCenter);

    // 获取传入的 QGraphicsTextItem 对象的文本光标
    QTextCursor cursor = t->textCursor();
    // 选择整个文档内容（即对整个文本进行操作）
    cursor.select(QTextCursor::Document);
    // 将居中对齐的格式应用到整个文本块中
    cursor.mergeBlockFormat(format);
    // 清除文本光标的选中状态，恢复正常
    cursor.clearSelection();
    // 将调整后的文本光标重新设置回 QGraphicsTextItem
    t->setTextCursor(cursor);
}

//渲染对应的储存结构数组
/*这里使用顺序渲染数组元素即可
 *只需之后额外考虑下各个元素的状态即可
 *我们这里为了简单就直接渲染出15个矩形框来进行储存，即使可能不会全部用到
 *
 */
void heap::renderArray(int k)
{
    for(int i=0;i<15;i++)
    {
        //矩形框的创建
        QGraphicsRectItem* rectItem=new QGraphicsRectItem;
        rectItem->setRect(-30,20,60,40);
        rectItem->setPos(QPointF(370+i*60,-90));        //注意这里的间隔距离要跟上面的矩形宽度一致
        rectItem->setPen(QColor(0xAB,0xAB,0xAB));            //设置对应的颜色
        if(i>=this->array.size())                       //由于输入元素不足不会使用到的情况
        {
            rectItem->setBrush(QBrush(QColor(0xf5,0xf5,0xf5)));      //设置不会使用到的框为灰色以进行区分
            this->Scene->addItem(rectItem);
        }
        else//在这里面的就都是需要进行文字渲染的项了
        {
            QGraphicsTextItem* word=new QGraphicsTextItem;
            word->setFont(QFont("Arial Black",13,false));
            word->setPos(QPointF(340+i*60,-65));        //文本的位置
            word->setPlainText(QString::number(this->nodes[i].getValue()));
            word->setTextWidth(60);                     //文本大小对其进行填充
            this->setTextAlign(word);

            //接下来对排序的元素进行颜色上的不同渲染进行区分
            // 这里是有效的矩形框渲染
            if (i >= k){
                rectItem->setBrush(QBrush(node::sorted_color));
                word->setDefaultTextColor(QColor(0xAB,0xAB,0xAB));
            } else {
                word->setDefaultTextColor(QColor("black"));
            }


            this->Scene->addItem(rectItem);
            this->Scene->addItem(word);
        }
    }
}



/*为了可视化，我们考虑使用一个对圆框的额外高亮的来显示
 * 同时通过文字项的逐渐换位渲染来模拟动画效果
 */
void heap::renderSwap(int swap1,int swap2){

    QGraphicsEllipseItem* s1=new QGraphicsEllipseItem;
    QGraphicsEllipseItem* s2=new QGraphicsEllipseItem;
    s1->setRect(-node::normal_radius,-node::normal_radius,2*node::normal_radius,2*node::normal_radius);
    s2->setRect(-node::normal_radius,-node::normal_radius,2*node::normal_radius,2*node::normal_radius);
    s1->setPos(this->nodes[swap1].getPos());
    s2->setPos(this->nodes[swap2].getPos());
    s1->setPen(QPen(QColor(node::chosen_color),3));//外围边框
    s2->setPen(QPen(QColor(node::chosen_color),3));//外围边框
    s1->setBrush(QBrush(QColor(node::chosen_bg_color)));//设置被选中的框的颜色，总总这些都在node类中设定
    s2->setBrush(QBrush(QColor(node::chosen_bg_color)));

    QGraphicsTextItem* t1=new QGraphicsTextItem;
    t1->setFont(QFont("Arial Black",9,false));
    t1->setPos(this->nodes[swap1].getPos().x()-node::normal_radius,this->nodes[swap1].getPos().y()-13);
    t1->setPlainText(QString::number(this->nodes[swap1].getValue()));
    t1->setDefaultTextColor(node::chosen_color);
    t1->setTextWidth(2*node::normal_radius+1);
    setTextAlign(t1);

    QGraphicsTextItem* t2=new QGraphicsTextItem;
    t2->setFont(QFont("Arial Black",9,false));
    t2->setPos(this->nodes[swap2].getPos().x()-node::normal_radius,this->nodes[swap2].getPos().y()-13);
    t2->setPlainText(QString::number(this->nodes[swap2].getValue()));
    t2->setDefaultTextColor(node::chosen_color);
    t2->setTextWidth(2*node::normal_radius);
    setTextAlign(t2);

    Scene->addItem(s1);
    Scene->addItem(s2);

    Scene->addItem(t1);
    Scene->addItem(t2);

    //交换动画设计QPropertyAnimation类

    //找出俩个交换点的位置，注意得是左上角
    QPointF pos1=QPointF(nodes[swap1].getPos().x()-node::normal_radius,nodes[swap1].getPos().y()-13);
    QPointF pos2=QPointF(nodes[swap2].getPos().x()-node::normal_radius,nodes[swap2].getPos().y()-13);


    QPropertyAnimation* a1=new QPropertyAnimation(t1,"pos");    //注意，这里第一个参数是要作为动画的对象，第二个是作为这个动画类对象的别名
    a1->setEasingCurve(QEasingCurve::InOutBounce);              //设置动画的缓动曲线，这里是先后慢，中间稍快
    a1->setDuration(400);                                       //设置动画的持续时间，为了与1000ms计时器协调，这里不应该太大
    a1->setStartValue(pos1);
    a1->setEndValue(pos2);

    QPropertyAnimation* a2=new QPropertyAnimation(t2,"pos");
    a2->setEasingCurve(QEasingCurve::InOutBounce);
    a2->setDuration(400);
    a2->setStartValue(pos2);
    a2->setEndValue(pos1);

    a1->start();
    a2->start();
    //基于协调，这俩的持续时间最好比500小，以实现跟1000ms触发的动画的协调
}

//点击按钮后能够继续动画
void heap::animationPlay()
{
    if(this->pauseloop->isRunning())
        this->pauseloop->quit();
}

//点击按钮后暂停动画
void heap::animationPause()
{
    if(this->sortloop->isRunning())
        this->sortloop->quit();
}


void heap::swapNodeValue(int i,int j)
{
    int temp=this->nodes[i].getValue();
    this->nodes[i].setValue(this->nodes[j].getValue());
    this->nodes[j].setValue(temp);
}


