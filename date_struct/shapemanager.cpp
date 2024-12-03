#include "shapemanager.h"

ShapeManager::ShapeManager(QGraphicsScene *scene, QTextEdit *debugOutputWidget)
    : QObject(nullptr),myscene(scene), timer(new QTimer(this)),debugOutput(debugOutputWidget) // 初始化定时器
{
    randomGenerator=QRandomGenerator::global();
    myArray={};
    currentStep=0;
    connect(timer,&QTimer::timeout,this,&ShapeManager::onSortHigh);
    outputBeautify();
}

void ShapeManager::creatRect()
{
    myArray.clear();
    int rectCount=randomGenerator->bounded(5,15);
    for(int i=0;i<rectCount;i++)
    {
        int height=randomGenerator->bounded(50,200);
        myArray.append(height);
    }
}

int ShapeManager::paint()
{
    if(myArray.empty())return -1;
    myscene->clear();//清空所有图形项

    int rectWidth = 30;    // 每个矩形的宽度
    int spacing = 10;      // 矩形之间的间距
    int startX = -90;        // 初始 X 坐标
    int startY = 300;      // 场景中 Y 基准线（矩形底部位置）


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
        // 创建文本项
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

int ShapeManager::reviseArray(QVector<int>&temp)
{

    myArray.clear();
    for(int num:temp)
        myArray.append(num);

    rectItem.clear();
    textItem.clear();


    return 0;
}

void ShapeManager::highLightRectangle(int index,const QColor &color)
{
    if(index<0||index>=rectItem.size())return ;
    rectItem[index]->setBrush(color);
}

void ShapeManager::bubbleSortVisualization()
{
    if (myArray.isEmpty())
        return;


    // 如果定时器已经在运行，直接返回，避免重复启动
    if (timer->isActive()) {
        return;
    }
    currentStep=0;
    // 设置定时器间隔为 2000 毫秒，然后启动定时器
    timer->start(2000);
}

void ShapeManager::onSortHigh()
{
    int n = myArray.size();

    if (currentStep >= n - 1) {
        // 最后一次排序，重置颜色为黑色
        // for (int i = 0; i < rectItem.size(); ++i) {
        //     rectItem[i]->setBrush(Qt::black);
        // }
        rectItem[0]->setBrush(Qt::black);
        timer->stop();
        return;
    }

    // 在每一轮排序之前，首先将所有矩形重置为默认颜色
    // 只有非高亮的矩形才会重置颜色
    for (int i = 0; i < rectItem.size(); ++i) {
        if (rectItem[i]->brush().color() != Qt::yellow && rectItem[i]->brush().color() != Qt::blue) {
            rectItem[i]->setBrush(Qt::black);
        }
    }

    // 高亮显示当前正在比较的矩形
    for (int i = 0; i < n - currentStep - 1; ++i) {
        highLightRectangle(i, Qt::yellow); // 高亮当前比较的矩形（黄色）
        highLightRectangle(i + 1, Qt::blue); // 高亮当前比较的下一个矩形（蓝色）
    }

    // 执行一次冒泡排序的比较和交换
    for (int i = 0; i < n - currentStep - 1; ++i) {
        if (myArray.at(i) > myArray.at(i + 1)) {

            QString str=QString("当前操作的俩个元素是:%1 ，%2\n").arg(myArray.at(i)).arg(myArray.at(i+1));
            updateDebugOutput(str);

            // 交换数组中的元素
            std::swap(myArray.operator[](i), myArray.operator[](i + 1));
            // 交换图形项的位置
            int tempHeight = rectItem[i]->rect().height();
            rectItem[i]->setRect(rectItem[i]->rect().x(), rectItem[i]->rect().y() - (myArray.at(i) - tempHeight),
                                 rectItem[i]->rect().width(), myArray.at(i));

            tempHeight = rectItem[i + 1]->rect().height();
            rectItem[i + 1]->setRect(rectItem[i + 1]->rect().x(), rectItem[i + 1]->rect().y() - (myArray.at(i + 1) - tempHeight),
                                     rectItem[i + 1]->rect().width(), myArray.at(i + 1));
            // 更新文本的位置和内容
            textItem[i]->setPlainText(QString::number(myArray.at(i)));
            textItem[i + 1]->setPlainText(QString::number(myArray.at(i + 1)));

            int textX1 = rectItem[i]->rect().x() + rectItem[i]->rect().width() / 2 - textItem[i]->boundingRect().width() / 2;
            int textY1 = rectItem[i]->rect().y() - textItem[i]->boundingRect().height() - 5;
            textItem[i]->setPos(textX1, textY1);

            int textX2 = rectItem[i + 1]->rect().x() + rectItem[i + 1]->rect().width() / 2 - textItem[i + 1]->boundingRect().width() / 2;
            int textY2 = rectItem[i + 1]->rect().y() - textItem[i + 1]->boundingRect().height() - 5;
            textItem[i + 1]->setPos(textX2, textY2);

        }
    }

    // 增加当前步骤
    ++currentStep;

    // 启动定时器，在一段时间后继续执行下一轮
    // 这里延时500ms,改变这里可以改变动画的速度
    QTimer::singleShot(500, this, &ShapeManager::onSortHigh);

    // 每次排序结束时，重置所有矩形的颜色
    for (int i = 0; i < rectItem.size(); ++i) {
        if (rectItem[i]->brush().color() != Qt::yellow) {
            rectItem[i]->setBrush(Qt::black); // 重置颜色为黑色
        }
    }
}

void ShapeManager::updateDebugOutput(QString text)
{
    if (debugOutput) {
        qDebug() << "更新调试信息: " << text;  // 输出到调试控制台
        debugOutput->append(text);
    }
}

void ShapeManager::outputBeautify()
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
