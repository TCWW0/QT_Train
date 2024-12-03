#include "arraybasic.h"

ArrayBasic::ArrayBasic(QGraphicsScene *scene, QTextEdit *debugOutputWidget)
    : QObject(nullptr),myscene(scene),myArray({}), timer(new QTimer(this)),debugOutput(debugOutputWidget)
{
    //myscene=scene;
    OutPutBeautify();//输出栏属性设置
}

int ArrayBasic::paint()
{
    if(myArray.empty())return -1;
    myscene->clear();//清空所有图形项

    // int rectWidth = 30;    // 每个矩形的宽度
    // int spacing = 10;      // 矩形之间的间距
    // int startX = -90;        // 初始 X 坐标     修改这个可以实现对应矩形其实渲染位置的修改
    // int startY = 300;      // 场景中 Y 基准线（矩形底部位置）

    for (int i = 0; i < myArray.size(); ++i)
    {
        int height = myArray.at(i); // 获取矩形高度
        int x = startX + i * (rectWidth + spacing); // 计算矩形的 X 坐标
        int y = startY - height;                   // 计算矩形的 Y 坐标（底部对齐）

        // 创建矩形项
        QGraphicsRectItem *rect = new QGraphicsRectItem(x, y, rectWidth, height);

        // 设置矩形填充颜色

        //这是随机生成颜色版本
        // QBrush brush(QColor::fromRgb(randomGenerator->bounded(255),
        //                              randomGenerator->bounded(255),
        //                              randomGenerator->bounded(255)));

        QBrush brush(Qt::black);
        rect->setBrush(brush);
        rect->setPen(Qt::NoPen); // 去掉边框

        // 添加到场景
        myscene->addItem(rect);
        rectItem.append(rect);//与数组元素顺序相同

        //额外在这些矩形之上去渲染一些数字，对应着这个矩形所代表的元素的大小
        // 创建文本项,同时将文本项挂到对应的矩形项中去
        QGraphicsTextItem *text = new QGraphicsTextItem(QString::number(height));
        text->setDefaultTextColor(Qt::black); // 设置文字颜色
        text->setFont(QFont("Arial", 10));   // 设置字体和大小

        // 将文本放置在矩形的顶部或中间
        int textX = x + rectWidth / 2 - text->boundingRect().width() / 2; // 水平居中
        int textY = y - text->boundingRect().height() - 5;               // 在矩形顶部
        text->setPos(textX, textY);

        // 添加到场景
        myscene->addItem(text);
        textItem.append(text);
    }
    myscene->update();
    return 0;

}

//交换数组元素索引i,j对应的矩形项和文本项
void ArrayBasic::Swap(int i,int j){
    // 交换数组中的元素
    std::swap(myArray.operator[](i), myArray.operator[](j));
    // 交换图形项的位置
    int tempHeight = rectItem[i]->rect().height();
    rectItem[i]->setRect(rectItem[i]->rect().x(), rectItem[i]->rect().y() - (myArray.at(i) - tempHeight),
                         rectItem[i]->rect().width(), myArray.at(i));

    tempHeight = rectItem[j]->rect().height();
    rectItem[j]->setRect(rectItem[j]->rect().x(), rectItem[j]->rect().y() - (myArray.at(j) - tempHeight),
                             rectItem[j]->rect().width(), myArray.at(j));
    // 更新文本的位置和内容
    textItem[i]->setPlainText(QString::number(myArray.at(i)));
    textItem[j]->setPlainText(QString::number(myArray.at(j)));

    int textX1 = rectItem[i]->rect().x() + rectItem[i]->rect().width() / 2 - textItem[i]->boundingRect().width() / 2;
    int textY1 = rectItem[i]->rect().y() - textItem[i]->boundingRect().height() - 5;
    textItem[i]->setPos(textX1, textY1);

    int textX2 = rectItem[j]->rect().x() + rectItem[j]->rect().width() / 2 - textItem[j]->boundingRect().width() / 2;
    int textY2 = rectItem[j]->rect().y() - textItem[j]->boundingRect().height() - 5;
    textItem[j]->setPos(textX2, textY2);
}

int ArrayBasic::reviseArray(QVector<int> &temp)
{
    //myArray.clear();
    // for(int num:temp)
    //     myArray.append(num);
    myArray=temp;
    qDebug() << "myArray size after revise: " << myArray.size();
    rectItem.clear();
    textItem.clear();
    return 0;
}

void ArrayBasic::highLightRectangle(int index,const QColor &color)
{
    if(index<0||index>=rectItem.size())return ;
    rectItem[index]->setBrush(color);
}

void ArrayBasic::OutPutBeautify()
{
    debugOutput->setReadOnly(true);//将输出栏属性定义为只读
    //应该在这里进行对各种窗口属性的调整以及设置

    // 设置占位符文本
    debugOutput->setPlaceholderText("调试信息将在这里输出...");

    // 设置文本对齐方式
    debugOutput->setAlignment(Qt::AlignLeft | Qt::AlignTop);  // 左对齐，顶部对齐

    // 设置 QTextEdit 为自动换行
    debugOutput->setWordWrapMode(QTextOption::WrapAnywhere);

    // 设置最大行数或宽度来避免内容溢出
    debugOutput->setFixedWidth(300);  // 设置固定宽度
    debugOutput->setFixedHeight(100); // 设置固定高度

    // 启用滚动条
    debugOutput->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOn); // 始终显示竖直滚动条
    debugOutput->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff); // 水平滚动条关闭

    // 禁止编辑文本
    debugOutput->setReadOnly(true); // 使 QTextEdit 为只读模式
    debugOutput->setFixedSize(250, 300);  // 设置固定宽度 500px，固定高度 200px
}

int ArrayBasic::modifyElement(int x,int value)
{
    if(x<0||x>myArray.size())return -1;
    myArray[x]=value;

    //下面的这个y为这个矩形对应元素的值
    int x1 = startX + x * (rectWidth + spacing); // 计算矩形的 X 坐标
    int y1 = startY - value;                   // 计算矩形的 Y 坐标（底部对齐）

    rectItem[x]->setRect(x1, y1, rectWidth, value);
    myscene->update();

    return 1;
}

void ArrayBasic::updateDebugOutput(QString &text)
{
    if (debugOutput) {
        //qDebug() << "更新调试信息: " << text;  // 输出到调试控制台
        debugOutput->append(text);
    }
}
