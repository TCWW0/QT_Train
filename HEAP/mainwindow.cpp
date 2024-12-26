#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
    ,scene(new QGraphicsScene)
    ,mybox(new Msgbox)
    //,Heap(new heap(this,this->scene,ui->graphicsView))        任何一个警告都必须注意!!!!!
    ,playPhoto(QPixmap(":/icon/icon_play_pressed.png"))
    ,pausePhoto(QPixmap(":/icon/icon_pause_pressed.png"))
{
    ui->setupUi(this);

    Heap=new heap(this,this->scene,ui->graphicsView);
    setWindowFlag(Qt::FramelessWindowHint);//无边框置顶
    this->setStyleSheet("#Widget{background-color: rgb(255,255,255);}");//设置整个窗口对象的背景色
    this->myintro=new MyIntroduce(this);//子窗口
    myintro->show();

    this->scene->setSceneRect(325,-140,920,660);//设置画布的显示位置

    this->playPhoto.scaled(ui->play->size(),Qt::KeepAspectRatio);//将图片与对应按钮大小进行绑定
    this->pausePhoto.scaled(ui->pause->size(),Qt::KeepAspectRatio);

    //设置QTooltip格式
    QToolTip::setFont(QFont("华文中宋",8));//这个是在鼠标移动到对应的存在提示的工具栏处会显示的东西

    ui->graphicsView->setRenderHint(QPainter::Antialiasing);//在图片渲染中启用抗锯齿，使图片圆滑
    ui->graphicsView->setScene(this->scene);

    // //设置画布QGraphicsView格式
    // ui->graphicsView->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff); // 禁用水平滚动条
    // ui->graphicsView->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff); // 禁用垂直滚动条


    connectInit();
}

MainWindow::~MainWindow()
{
    delete ui;
    delete scene;
    delete mybox;
    delete Heap;
    delete timer_interval;
}

//这个函数是一个重载，会被自动调用，所以不用去找哪里调用了它了
void MainWindow::paintEvent(QPaintEvent *p)
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
    connect(ui->OK_Button,&QPushButton::clicked,this,&MainWindow::inputButton_clicked);
    connect(ui->buildHeap,&QPushButton::clicked,this,&MainWindow::buildHeapButton_clicked);
    connect(ui->sortButton,&QPushButton::clicked,this,&MainWindow::sortButton_clicked);
    connect(ui->play,&QPushButton::clicked,this,&MainWindow::play_clicked);
    connect(ui->pause,&QPushButton::clicked,this,&MainWindow::pause_clicked);
    connect(ui->profileButton,&QPushButton::clicked,this,&MainWindow::profileButton_clicked);
}


void MainWindow::quitButton_clicked()
{
    this->close();
    exit(0);
}

void MainWindow::inputButton_clicked()
{
    //我们需要判断当前是否处于动画中，是就不能输入防止错误，毕竟这时可能是阻塞的，也可能"竞争"
    if(this->Heap->isLoopRunning())return;

    //检查输入的字符串是否符合格式，要求只包含数字和空格
    QString input_str=ui->Input->toPlainText().trimmed();
    bool valid=true;
    if(input_str.isEmpty()){
        this->mybox->showMymsgbox(noBuild_boxStyle);    //弹出显示空输入的提示框
        return;
    }

    for(auto&c:input_str){          //逐个检查字符，如果存在数字或空格之外的就会退出
        if(!c.isDigit() && !c.isSpace()){
            valid=false;
            break;
        }
    }

    if(valid)
    {
        if(input_str.split(' ').size()>15){//输入数字过多
            this->mybox->showMymsgbox(overflow_boxStyle);   //弹出输入过多提示框
            ui->Input->clear();
        }
        else{//正确且数量合理
            //存入新的数据
            QVector<int>arr;
            for(auto&s:input_str.split(' ')){
                arr.push_back(s.toInt());
            }
            //将该数组传给Heap
            this->Heap->setArrayValue(arr);
            //提示创建成功
            this->mybox->showMymsgbox(okBuild_boxStyle);
        }
    }
    else
    {
        //输入非法，不执行操作
        this->mybox->showMymsgbox(invalid_boxStyle);
        ui->Input->clear();
    }
}

//这个是建堆按钮槽函数，只需要构建数组和为排序的大顶堆即可
void MainWindow::buildHeapButton_clicked()
{
    //排序正在进行，拒绝请求
    if(this->Heap->isLoopRunning())return;

    if(this->Heap->isReadyToBuild()){
        this->Heap->renderNodes(this->Heap->getArraySize());
        this->Heap->renderArray(this->Heap->getArraySize()); 
    }
    else
    {
        this->mybox->showMymsgbox(noBuild_boxStyle);
        ui->Input->clear();
    }
}

void MainWindow::sortButton_clicked()
{
    //检测当前是否已经在排序当中，是则退出
    if(this->Heap->isLoopRunning())
        return ;

    if(this->Heap->isReadyToBuild()&&this->Heap->isReadyToSort())
    {
        Heap->HeapSort();
        //弹窗显示当前排序已经结束
        this->mybox->showMymsgbox(over_boxStyle);
        //清空画布
        this->scene->clear();
        ui->Input->clear();
    }
    else
    {
        this->mybox->showMymsgbox(noBuild_boxStyle);
        ui->Input->clear();
    }
}

void MainWindow::play_clicked()
{
    //不在pauseloop说明动画正常执行中，不用其他操作
    if(!this->Heap->isPauseRunning())
        return;

    if(this->Heap->isReadyToBuild() && this->Heap->isReadyToSort()){
        QLabel* icon=ui->statusicon;
        icon->setPixmap(QPixmap());
        icon->setScaledContents(true);
        icon->setPixmap(this->playPhoto);
        QTimer* timer=new QTimer(this);
        timer->setSingleShot(true);
        timer->setInterval(800);
        connect(timer,&QTimer::timeout,[=]{
            icon->setPixmap(QPixmap());
        });
        timer->start();
        //play
        this->Heap->animationPlay();
    }
}

void MainWindow::pause_clicked()
{
    //在pauseloop说明动画已经被暂停，不用其他操作
    if(this->Heap->isPauseRunning())
        return;

    if(this->Heap->isReadyToBuild() && this->Heap->isReadyToSort()){
        QLabel* icon=ui->statusicon;
        icon->setScaledContents(true);
        icon->setPixmap(this->pausePhoto);
        //pause
        this->Heap->animationPause();
    }
}

void MainWindow::profileButton_clicked()
{
    this->myintro->show();
}
