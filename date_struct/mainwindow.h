#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QGraphicsView>
#include <QGraphicsScene>
#include <QGraphicsRectItem>
#include <QFile>
#include <QDebug>
#include <QList>

#include "shapemanager.h"
#include "arraybasic.h"
#include "quicksort.h"
#include "bubblesort.h"

enum sortType{
    quickSort,
    chooseSort,
    bubblesort
};

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE


//关于排序方法在数组中的位置在sortInit中自行查看
class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    void setStyle();
    void sortChooseInit();
    void sortInit();
    void connectInit();
    //这好像是库打桩那块相似的替换技术啊
    void on_ArrayEdit_editingFinished();
    void on_bubbleSortButton_clicked();
    void on_sortChoose_currentIndexChanged(int index);

private:
    Ui::MainWindow *ui;//管理的ui文件
    QGraphicsScene *scene; // 场景
    ShapeManager *shapeManager;
    QuickSort *quicksort;
    //QList <ArrayBasic*>sortArray;为什么会报错呢，为什么呢！！！！！
    //简单的基础测试，之后将会用一个arraybasic类数组来实现对于多种排序方法的支持
};
#endif // MAINWINDOW_H
