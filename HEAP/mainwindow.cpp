#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
    ,scene(new QGraphicsScene)
    ,playPhoto(QPixmap(":/icon/icon_play_pressed.png"))
    ,pausePhoto(QPixmap(":/icon/icon_pause_pressed.png"))
{
    ui->setupUi(this);
    this->setFixedSize(1080, 800);
    this->move(300,50);

    setWindowFlag(Qt::FramelessWindowHint);//无边框置顶
    setWindowFlag(Qt::WindowStaysOnTopHint);//始终位于窗口的最上层
    this->setStyleSheet("#Widget{background-color: rgb(255,255,255);}");//设置整个窗口对象的背景色
    this->scene->setSceneRect(325,-140,920,660);//设置画布的显示位置
    this->playPhoto.scaled(ui->play->size(),Qt::KeepAspectRatio);//将图片与对应按钮大小进行绑定
    this->pausePhoto.scaled(ui->pause->size(),Qt::KeepAspectRatio);

    //设置QTooltip格式
    QToolTip::setFont(QFont("华文中宋",8));//这个是在鼠标移动到对应的存在提示的工具栏处会显示的东西

    ui->graphicsView->setRenderHint(QPainter::Antialiasing);//在图片渲染中启用抗锯齿，是图片圆滑
    ui->graphicsView->setScene(this->scene);

    //设置画布QGraphicsView格式
    ui->graphicsView->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff); // 禁用水平滚动条
    ui->graphicsView->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff); // 禁用垂直滚动条


    connectInit();
}

MainWindow::~MainWindow()
{
    delete ui;
    delete scene;
}

//这个函数是一个重载，会被自动调用，所以不用去找哪里调用了它了
void MainWindow::paintWindow(QPaintEvent *p)
{
    Q_UNUSED(p);
    //绘制圆角样式
    QStyleOption opt;
    opt.initFrom(this);
    QPainter p1(this);
    style()->drawPrimitive(QStyle::PE_Widget, &opt, &p1, this);//绘制样式

    QBitmap bmp(this->size());
    bmp.fill();
    QPainter painter(&bmp);
    painter.setPen(Qt::NoPen);
    painter.setBrush(Qt::black);
    painter.setRenderHint(QPainter::Antialiasing);
    painter.drawRoundedRect(bmp.rect(), 20, 20);
    setMask(bmp);
}

void MainWindow::connectInit()
{
    connect(ui->exitButton,&QPushButton::clicked,this,&MainWindow::quitButton_clicked);
}


void MainWindow::quitButton_clicked()
{
    this->close();
    exit(0);
}
