#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    scene=new QGraphicsScene(this);
    //shapeManager=new ShapeManager(scene,ui->debugOutput);

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
    //需要在这里进行对所有类数组元素的赋值
    for(auto array:sortArray)
    {
        array->reviseArray(newArray);
    }
    //由于所有的paint方法都一致，在全部赋值完后进行一次的绘画就行
    sortArray[0]->paint();
    //shapeManager->reviseArray(newArray);
    //shapeManager->paint();
}

//冒泡排序高亮
// void MainWindow::on_bubbleSortButton_clicked()
// {
//     qDebug() << "Bubble sort button clicked.";
//     shapeManager->bubbleSortVisualization();
// }

void MainWindow::sortChooseInit()
{
    //防止在设置下拉窗属性时触发信号，有点像信号保护的做法啊
    disconnect(ui->sortChoose, SIGNAL(currentIndexChanged(int)),
               this, SLOT(on_sortChoose_currentIndexChanged(int)));

    // 在下拉框显示的默认项，且该项不会出现在下拉框中
    ui->sortChoose->insertItem(0, "请选择方法");  // 添加一个默认项
    ui->sortChoose->setItemData(0, true, Qt::UserRole - 1);  // 将该项设置为不可选择
    ui->sortChoose->insertItem(1,"快速排序",QVariant::fromValue(quickSort));  

    // 设置当前项为默认项
    ui->sortChoose->setCurrentIndex(0);

    // 重新连接信号
    connect(ui->sortChoose, SIGNAL(currentIndexChanged(int)),
            this, SLOT(on_sortChoose_currentIndexChanged(int)));
}

void MainWindow::sortInit()
{
    QuickSort* quickSort=new QuickSort(scene,ui->debugOutput);
    //需要在这里去规定插入的排序方法的顺序
    sortArray.append(quickSort);//0~快速排序
}

void MainWindow::on_sortChoose_currentIndexChanged(int index)
{
    if(sortArray.empty())
    {
        qDebug()<<"方法数组为空，无法排序\n";
        return ;
    }
    // 获取选择项的关联数据（QVariant）
    QVariant selectedData = ui->sortChoose->itemData(index);

    // 转换为枚举类型
    sortType selectedSort = selectedData.value<sortType>();

    switch (selectedSort) {
    case quickSort:

        qDebug()<<"快速排序调用";
        if(!sortArray[0])
        {
            qDebug()<<"当前快排方法未插入";
            break;
        }
        sortArray.at(0)->specialSort();
        break;
    case chooseSort:

        break;
    default:
        break;
    }
}

