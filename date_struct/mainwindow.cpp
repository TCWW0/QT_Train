#include "mainwindow.h"
#include "ui_mainwindow.h"
//65 34 21 43 89 12 78 56 90 3

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    scene=new QGraphicsScene(this);
    shapeManager=new ShapeManager(scene,ui->debugOutput);

    //关联ui视图的scene和视图属性
    ui->graphicsView->setScene(scene);
    ui->graphicsView->setRenderHint(QPainter::Antialiasing);
    ui->graphicsView->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    ui->graphicsView->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);

    this->resize(1000, 500);
    scene->setSceneRect(0, 0, 800, 500);

    setInputProperties();

    // 显示视图
    this->setWindowTitle("QGraphicsView 示例");
}

//美化函数
void MainWindow::setInputProperties()
{
    ui->ArrayEdit->setFixedSize({300,40});
    ui->ArrayEdit->setStyleSheet(
        "QLineEdit {"
        "   border: 2px solid #5A5A5A;"
        "   border-radius: 10px;"
        "   padding: 5px;"
        "   background: #F8F9FA;"
        "   font-size: 16px;"
        "   color: #333333;"
        "}"
        "QLineEdit:hover {"
        "   border: 2px solid #007BFF;"
        "}"
        "QLineEdit:focus {"
        "   border: 2px solid #28A745;"
        "   background: #E9F7EF;"
        "}"
        "QLineEdit::placeholder {"
        "   color: #AAAAAA;"
        "   font-style: italic;"
        "}"
        );
    // 设置占位符文本
    ui->debugOutput->setPlaceholderText("调试信息将在这里输出...");

    // 设置文本对齐方式
    ui->debugOutput->setAlignment(Qt::AlignLeft | Qt::AlignTop);  // 左对齐，顶部对齐

    // 设置 QTextEdit 为自动换行
    ui->debugOutput->setWordWrapMode(QTextOption::WrapAnywhere);

    // 设置最大行数或宽度来避免内容溢出
    ui->debugOutput->setFixedWidth(300);  // 设置固定宽度
    ui->debugOutput->setFixedHeight(100); // 设置固定高度

    // 设置样式表（类似之前设置QLineEdit的样式）
    ui->debugOutput->setStyleSheet(
        "QTextEdit {"
        "   border: 2px solid #5A5A5A;"
        "   border-radius: 10px;"
        "   padding: 5px;"
        "   background: #F8F9FA;"
        "   font-size: 14px;"
        "   color: #333333;"
        "}"
        "QTextEdit:hover {"
        "   border: 2px solid #007BFF;"
        "}"
        "QTextEdit:focus {"
        "   border: 2px solid #28A745;"
        "   background: #E9F7EF;"
        "}"
        "QTextEdit::placeholder {"
        "   color: #AAAAAA;"
        "   font-style: italic;"
        "}"
        );

    // 启用滚动条
    ui->debugOutput->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOn); // 始终显示竖直滚动条
    ui->debugOutput->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff); // 水平滚动条关闭

    // 禁止编辑文本
    ui->debugOutput->setReadOnly(true); // 使 QTextEdit 为只读模式
    ui->debugOutput->setFixedSize(250, 300);  // 设置固定宽度 500px，固定高度 200px

    // 设置 bubbleSortButton 的样式表
    ui->bubbleSortButton->setStyleSheet(
        "QPushButton {"
        "   background-color: #808080;"  // 按钮背景色
        "   color: white;"                // 按钮文字颜色
        "   border: 2px solid #808080;"   // 边框颜色
        "   border-radius: 15px;"         // 边框圆角
        "   padding: 10px 20px;"          // 按钮内边距
        "   font-size: 16px;"             // 字体大小
        "   font-weight: bold;"           // 字体加粗，增强文字可读性
        "}"
        "QPushButton:hover {"
        "   background-color: #333333;"  // 鼠标悬停时背景色
        "   border: 2px solid #333333;"   // 鼠标悬停时边框颜色
        "}"
        );

}

MainWindow::~MainWindow()
{
    delete ui;
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

