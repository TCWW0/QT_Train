#include "myintroduce.h"
#include "ui_myintroduce.h"

MyIntroduce::MyIntroduce(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MyIntroduce)
{
    ui->setupUi(this);
    // 在 MainWindow 的构造函数中设置无边框窗口
    this->setWindowFlags(Qt::FramelessWindowHint);

    //设置profile的初始状态
    resize(400,660);
    //this->move(160,70);
    //动画
    animation = new QPropertyAnimation(this,"geometry");
    animation->setEasingCurve(QEasingCurve::InOutQuint);
    animation->setDuration(1000);   //持续时间
    connect(ui->back,&QPushButton::clicked,this,&MyIntroduce::backButton_clicked);
}

MyIntroduce::~MyIntroduce()
{
    delete ui;
    delete animation;
}


void MyIntroduce::show()
{
    this->QMainWindow::show();  // 显示窗口
    qDebug() << "Window position: " << this->pos();

    animation->setStartValue(QRect(-400,0,400,760));
    animation->setEndValue(QRect(0,0,400,760));
    animation->start();
}

void MyIntroduce::hide(){
    animation->setStartValue(QRect(0,0,400,760));
    animation->setEndValue(QRect(-400,0,400,760));
    animation->start();
}

void MyIntroduce::backButton_clicked()
{
    this->hide();
}
