#ifndef MYINTRODUCE_H
#define MYINTRODUCE_H

//这个类是用来实现一定的启动的动画效果的
#include <QPropertyAnimation>
#include <QMainWindow>
#include <QObject>
#include <QPushButton>

//我们将把这个窗口挂到主窗口上
/* 请注意，在整个程序的运行阶段，这个窗口其实是一直存在的
 * 所以这个的视觉效果就是消失了
 * 我们通过对矩形渲染位置的动画类平移来实现动画效果
 */
namespace Ui {
class MyIntroduce;
}

class MyIntroduce : public QMainWindow
{
    Q_OBJECT

public:
    explicit MyIntroduce(QWidget *parent = nullptr);
    ~MyIntroduce();

private:
    Ui::MyIntroduce *ui;
    QPropertyAnimation *animation=nullptr;

public:
    void show();
    void hide();
    void backButton_clicked();
};

#endif // MYINTRODUCE_H
