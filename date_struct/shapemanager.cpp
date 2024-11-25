#include "shapemanager.h"

ShapeManager::ShapeManager(QGraphicsScene *scene)
: QObject(nullptr), myscene(scene), timer(new QTimer(this)) // 初始化定时器
{
    randomGenerator=QRandomGenerator::global();
    myArray=new QVector<int>;
}

void ShapeManager::creatRect()
{
    myArray->clear();
    int rectCount=randomGenerator->bounded(5,15);
    for(int i=0;i<rectCount;i++)
    {
        int height=randomGenerator->bounded(50,200);
        myArray->append(height);
    }
}

int ShapeManager::paint()
{
    if(!myArray)return -1;
    myscene->clear();//清空所有图形项

    int rectWidth = 30;    // 每个矩形的宽度
    int spacing = 10;      // 矩形之间的间距
    int startX = 0;        // 初始 X 坐标
    int startY = 300;      // 场景中 Y 基准线（矩形底部位置）

    for (int i = 0; i < myArray->size(); ++i)
    {
        int height = myArray->at(i); // 获取矩形高度
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

    delete myArray;
    myArray=nullptr;
    myArray=new QVector<int>(temp);

    rectItem.clear();

    return 0;
}

void ShapeManager::highLightRectangle(int index,const QColor &color)
{
    if(index<0||index>=rectItem.size())return ;
    rectItem[index]->setBrush(color);
}

void ShapeManager::bubbleSortVisualization()
{
    if (myArray->isEmpty())
        return;

    int n = myArray->size();
    int currentStep = 0;

    // 如果定时器已经在运行，直接返回，避免重复启动
    if (timer->isActive()) {
        return;
    }

    // 断开之前的连接，确保定时器只有一个槽函数连接
    disconnect(timer, &QTimer::timeout, nullptr, nullptr);

    // 定时器连接到一个槽，执行每一步的排序可视化
    connect(timer, &QTimer::timeout, [this, n, currentStep]() mutable
    {
        if (currentStep >= n - 1) {
            // 最后一次排序，重置颜色为黑色
            for (int i = 0; i < rectItem.size(); ++i) {
                rectItem[i]->setBrush(Qt::black);
            }
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
            if (myArray->at(i) > myArray->at(i + 1)) {
                // 交换数组中的元素
                std::swap(myArray->operator[](i), myArray->operator[](i + 1));
                // 交换图形项的位置
                int tempHeight = rectItem[i]->rect().height();
                rectItem[i]->setRect(rectItem[i]->rect().x(), rectItem[i]->rect().y() - (myArray->at(i) - tempHeight),
                                     rectItem[i]->rect().width(), myArray->at(i));

                tempHeight = rectItem[i + 1]->rect().height();
                rectItem[i + 1]->setRect(rectItem[i + 1]->rect().x(), rectItem[i + 1]->rect().y() - (myArray->at(i + 1) - tempHeight),
                                         rectItem[i + 1]->rect().width(), myArray->at(i + 1));
                // 更新文本的位置和内容
                textItem[i]->setPlainText(QString::number(myArray->at(i)));
                textItem[i + 1]->setPlainText(QString::number(myArray->at(i + 1)));

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

        // 每次排序结束时，重置所有矩形的颜色
        for (int i = 0; i < rectItem.size(); ++i) {
            if (rectItem[i]->brush().color() != Qt::yellow) {
                rectItem[i]->setBrush(Qt::black); // 重置颜色为黑色
            }
        }
    });



    // 设置定时器间隔为 2000 毫秒，然后启动定时器
    timer->start(2000);
}
