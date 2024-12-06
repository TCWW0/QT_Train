#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QGraphicsScene>
#include <QPixmap>
#include <QToolTip>
#include <QFont>
#include <QStyleOption>

#include "heap.h"
#include "GuiStyle.h"   //调的别人的弹窗包
#include "myintroduce.h"

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    void connectInit();

private:
    void paintEvent(QPaintEvent *p);//用于用户界面的设置,这是一个重载函数，必须保留这个参数
    Ui::MainWindow *ui;
    QGraphicsScene *scene;
    Msgbox * mybox;                 //额外的消息弹窗格式
    heap* Heap;
    QTimer* timer_interval;         //主窗口自我管理的计时器

    QPixmap playPhoto;
    QPixmap pausePhoto;
    MyIntroduce* myintro;

//这个分区与上面的那个分区区分开来，用来进行槽函数的定义，不使用自动连接槽了。
public:
    void quitButton_clicked();//退出程序的按钮
    void inputButton_clicked();//数组的输入
    void buildHeapButton_clicked();//建堆按钮
    void sortButton_clicked();//开始排序的按钮
    void play_clicked();//继续运行的按钮
    void pause_clicked();//暂停排序的按钮
    void profileButton_clicked();

     //调用的别人的scene格式，设计不了一点
protected:
    QString invalid_boxStyle="<html>"
                               "<head>"
                               "<style type=\"text/css\">"
                               "p.first {font-size: 8pt; color: black; font-family: '微软雅黑', sans-serif;font-weight:semi-bold;}"
                               "p.second { font-size: 10pt; color: black; font-family: '微软雅黑', sans-serif;font-weight:bold;} "
                               "p.third { font-size: 8pt; color: grey; font-family: '微软雅黑', sans-serif;font-weight:semi-bold;}"
                               "</style>"
                               "</head>"
                               "<body>"
                               "<p class=\"first\">错误！</p>"
                               "<p class=\"second\">输入内容非法，请按正确格式重新输入</p>"
                               "<p class=\"third\">Invalid input, try again</p>"
                               "</body>"
                               "</html>";
    QString overflow_boxStyle="<html>"
                                "<head>"
                                "<style type=\"text/css\">"
                                "p.first {font-size: 8pt; color: black; font-family: '微软雅黑', sans-serif;font-weight:semi-bold;}"
                                "p.second { font-size: 10pt; color: black; font-family: '微软雅黑', sans-serif;font-weight:bold;} "
                                "p.third { font-size: 8pt; color: grey; font-family: '微软雅黑', sans-serif;font-weight:semi-bold;}"
                                "</style>"
                                "</head>"
                                "<body>"
                                "<p class=\"first\">诶呀！</p>"
                                "<p class=\"second\">输入数字太多啦，再输入这么多让你飞起来</p>"
                                "<p class=\"third\">Too many numbers, try again</p>"
                                "</body>"
                                "</html>";
    QString noBuild_boxStyle="<html>"
                               "<head>"
                               "<style type=\"text/css\">"
                               "p.first {font-size: 8pt; color: black; font-family: '微软雅黑', sans-serif;font-weight:semi-bold;}"
                               "p.second { font-size: 10pt; color: black; font-family: '微软雅黑', sans-serif;font-weight:bold;} "
                               "p.third { font-size: 8pt; color: grey; font-family: '微软雅黑', sans-serif;font-weight:semi-bold;}"
                               "</style>"
                               "</head>"
                               "<body>"
                               "<p class=\"first\">错误！</p>"
                               "<p class=\"second\">缺少合法数据以构建堆结构</p>"
                               "<p class=\"third\">Lack of data, try again</p>"
                               "</body>"
                               "</html>";
    QString okBuild_boxStyle="<html>"
                               "<head>"
                               "<style type=\"text/css\">"
                               "p.first {font-size: 8pt; color: black; font-family: '微软雅黑', sans-serif;font-weight:semi-bold;}"
                               "p.second { font-size: 10pt; color: black; font-family: '微软雅黑', sans-serif;font-weight:bold;} "
                               "p.third { font-size: 8pt; color: grey; font-family: '微软雅黑', sans-serif;font-weight:semi-bold;}"
                               "</style>"
                               "</head>"
                               "<body>"
                               "<p class=\"first\">提示</p>"
                               "<p class=\"second\">成功录入数据，点击[建堆]查看堆结构</p>"
                               "<p class=\"third\">Succeed,check your heap now</p>"
                               "</body>"
                               "</html>";
    QString over_boxStyle="<html>"
                            "<head>"
                            "<style type=\"text/css\">"
                            "p.first {font-size: 8pt; color: black; font-family: '微软雅黑', sans-serif;font-weight:semi-bold;}"
                            "p.second { font-size: 10pt; color: black; font-family: '微软雅黑', sans-serif;font-weight:bold;} "
                            "p.third { font-size: 8pt; color: grey; font-family: '微软雅黑', sans-serif;font-weight:semi-bold;}"
                            "</style>"
                            "</head>"
                            "<body>"
                            "<p class=\"first\">提示</p>"
                            "<p class=\"second\">排序完成，点击[OK]清空屏幕</p>"
                            "<p class=\"third\">Succeed,clean the screen</p>"
                            "</body>"
                            "</html>";



};
#endif // MAINWINDOW_H
