#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    scene=new QGraphicsScene(this);
    shapeManager=new ShapeManager(scene,ui->debugOutput);

    connectInit();//各个按钮的槽函数连接

    //关联ui视图的scene和视图属性
    ui->graphicsView->setScene(scene);
    ui->graphicsView->setRenderHint(QPainter::Antialiasing);
    ui->graphicsView->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    ui->graphicsView->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);

    sortInit();//注意排序方法的实例化要在下拉菜单初始化之前
    sortChooseInit();//初始化下拉菜单，之后的连接也会在这之中

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
    connect(ui->sortChoose,&QComboBox::currentIndexChanged,this,&MainWindow::on_sortChoose_currentIndexChanged);
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
    shapeManager->paint();
}

//冒泡排序高亮
void MainWindow::on_bubbleSortButton_clicked()
{
    qDebug() << "Bubble sort button clicked.";
    shapeManager->bubbleSortVisualization();
}

void MainWindow::sortChooseInit()
{
    //防止在设置下拉窗属性时触发信号，有点像信号保护的做法啊
    disconnect(ui->sortChoose,&QComboBox::currentIndexChanged,this,&MainWindow::on_sortChoose_currentIndexChanged);

    // 在下拉框显示的默认项，且该项不会出现在下拉框中
    ui->sortChoose->insertItem(0, "请选择方法");  // 添加一个默认项
    ui->sortChoose->setItemData(0, true, Qt::UserRole - 1);  // 将该项设置为不可选择
    ui->sortChoose->insertItem(1,"快速排序",QVariant::fromValue(quickSort));
    ui->sortChoose->insertItem(2,"冒泡排序",QVariant::fromValue(bubblesort));

    // 设置当前项为默认项
    ui->sortChoose->setCurrentIndex(0);

    // 重新连接信号
    connect(ui->sortChoose,&QComboBox::currentIndexChanged,this,&MainWindow::on_sortChoose_currentIndexChanged);
}

//由这个来进行各个按钮的初始化
void MainWindow::sortInit()
{

}

void MainWindow::on_sortChoose_currentIndexChanged(int index)
{
    // 获取选择项的关联数据（QVariant）
    QVariant selectedData = ui->sortChoose->itemData(index);

    // 转换为枚举类型
    sortType selectedSort = selectedData.value<sortType>();

    switch (selectedSort) {
    case quickSort:

        qDebug()<<"快速排序调用";
        break;
    case bubblesort:

        break;
    default:
        break;
    }
}

