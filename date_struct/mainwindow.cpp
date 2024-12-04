#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
    ,scene(new QGraphicsScene(this))
{
    ui->setupUi(this);//必须在这一行后再进行各个排序方法初始化，不然debugoutput是空的会导致崩溃
    connectInit();//各个按钮的槽函数连接
    shapeManager=new ShapeManager(scene,ui->debugOutput);
    bubbleSort=new BubbleSort(scene,ui->debugOutput);
    quicksort=new QuickSort(scene,ui->debugOutput);
    //关联ui视图的scene和视图属性
    ui->graphicsView->setScene(scene);
    ui->graphicsView->setRenderHint(QPainter::Antialiasing);
    ui->graphicsView->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    ui->graphicsView->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);

    // 固定窗口大小，禁止调整
    this->setFixedSize(1000, 500);  // 设置固定的窗口大小
    this->setStatusBar(nullptr); // 禁用状态栏

    scene->setSceneRect(0, 0, 800, 500);//画布大小

    // 显示视图
    this->setWindowTitle("QGraphicsView 示例");
}

MainWindow::~MainWindow()
{
    delete ui;
}

//由于数组和下拉窗的bug所以我直接摆烂使用按钮来进行设计了
void MainWindow::connectInit()
{
    connect(ui->ArrayEdit,&QLineEdit::editingFinished,this,&MainWindow::on_ArrayEdit_editingFinished);
    connect(ui->bubbleSortButton,&QPushButton::clicked,this,&MainWindow::on_bubbleSortButton_clicked);
    connect(ui->BubbleSort,&QPushButton::clicked,this,&MainWindow::bubbleSortButton_clicked);
    connect(ui->quickSortButton,&QPushButton::clicked,this,&MainWindow::quickSortButton_clicked);
}

void MainWindow::setStyle()
{
    QFile file(":/style.qss");
    if (file.open(QFile::ReadOnly)) {
        QTextStream ts(&file);
        QString style = ts.readAll();
        qApp->setStyleSheet(style);  // 设置应用程序的样式表
        qDebug()<<"正确使用了样式表格式\n";
    }
    else {
        qDebug() << "样式表加载失败，检查文件路径\n";
    }
}

void MainWindow::on_ArrayEdit_editingFinished()
{
    //获取用户输入
    QString input=ui->ArrayEdit->text();

    QVector<int>newArray;
    for(const QString &num:input.split(" ",Qt::SkipEmptyParts))
    {
        bool ok;
        int value=num.trimmed().toInt(&ok);
        if(ok){
            newArray.append(value);
        }
    }
    shapeManager->reviseArray(newArray);
    bubbleSort->reviseArray(newArray);
    quicksort->reviseArray(newArray);
    //shapeManager->paint();//这里只是简单的使用一个类的绘画函数，这是因为我们所有的类的绘画设计都是一样的
    //bubbleSort->paint();
}

//冒泡排序调用
void MainWindow::on_bubbleSortButton_clicked()
{
    //必须添加下面俩行进行重绘，不然段错误
    scene->clear();
    shapeManager->paint();
    qDebug() << "Bubble sort button clicked.";
    shapeManager->bubbleSortVisualization();
}

//基类的冒泡排序子函数调用
void MainWindow::bubbleSortButton_clicked()
{
    scene->clear();
    bubbleSort->paint();
    qDebug() << "基类的冒泡排序调用";

    bubbleSort->specialSort();
}

void MainWindow::quickSortButton_clicked()
{
    scene->clear();
    quicksort->paint();
    qDebug() << "基类的快速排序调用";
    //quicksort->specialSort();
}

