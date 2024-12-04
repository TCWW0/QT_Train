#ifndef ARRAYBASIC_H
#define ARRAYBASIC_H

#include <QObject>
#include <QGraphicsView>
#include <QGraphicsScene>
#include <QGraphicsRectItem>
#include <QRandomGenerator>
#include <QVector>
#include <QTimer>
#include <QTextEdit>
#include <QString>
#include <QMainWindow>

//下面进行对于矩形性质的定义
#define rectWidth 30    // 每个矩形的宽度
#define spacing 10  // 矩形之间的间距
#define startX -90  // 初始 X 坐标
#define startY 300  // 场景中 Y 基准线（矩形底部位置）

//纯虚类用于对应按钮功能的构建

class ArrayBasic : public QObject
{
    Q_OBJECT
public:
    explicit ArrayBasic(QGraphicsScene *scene, QTextEdit *debugOutputWidget);//基础构造，应将各种美化方法放于此中
    int paint();//基础的渲染函数，设置了渲染的基础信息，并在这里对矩形和文本数组进行了构建
    int reviseArray(QVector<int> &temp);//将类成员数组调整为对应的新数组并且清空对应的矩形和文字数组
    void highLightRectangle(const QVector<int>&res,const QColor &color=Qt::red);//高光办法的实现，就是对于渲染颜色的更改
    virtual void specialSort()=0;//这个是对应子类的排序函数以及对应的高亮方法
    void updateDebugOutput(QString &text);//子类想要输出到控制栏上的信息
    void OutPutBeautify();//调试信息输出栏的部分属性设置
    void Swap(int i,int j);
    int modifyElement(int x,int value);//修改特定位置上的元素为特定值，更新矩形和文本
    //void cleanGraphicsItem();//在进行另外的排序渲染时，要清空了现有的图形项
protected:
    QGraphicsScene *myscene;//主渲染窗口
    QVector <QGraphicsRectItem*> rectItem;//与容器对应的矩形图像
    QVector <QGraphicsTextItem*> textItem;//与图像对应的文字显示矩形代表数据的大小
    QVector <int>myArray;//将要操作的容器
    QTimer *timer;//计时器来进行时间间隔的调整
    QTextEdit *debugOutput;//调试信息的输出位置

signals:
};

#endif // ARRAYBASIC_H
