#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QGraphicsScene>
#include <QPixmap>
#include <QToolTip>
#include <QFont>
#include <QStyleOption>

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
    void paintWindow(QPaintEvent *p);//用于用户界面的设置,这是一个重载函数，必须保留这个参数
    Ui::MainWindow *ui;
    QGraphicsScene *scene;
    QPixmap playPhoto;
    QPixmap pausePhoto;

//这个分区与上面的那个分区区分开来，用来进行槽函数的定义，不使用自动连接槽了。
public:
    void quitButton_clicked();//退出程序的按钮

};
#endif // MAINWINDOW_H
