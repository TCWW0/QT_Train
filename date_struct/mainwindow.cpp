#include "mainwindow.h"
#include "ui_mainwindow.h"


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    scene=new QGraphicsScene(this);
    shapeManager=new ShapeManager(scene);

    //关联ui视图的scene和视图属性
    ui->graphicsView->setScene(scene);
    ui->graphicsView->setRenderHint(QPainter::Antialiasing);
    ui->graphicsView->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    ui->graphicsView->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);

    this->resize(900, 800);
    scene->setSceneRect(0, 0, 800, 600);

    setInputProperties();

    // 显示视图
    this->setWindowTitle("QGraphicsView 示例");
}

//设置输入栏的属性
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
    ui->ArrayEdit->setPlaceholderText("请输入数据，例如 1 2 3...");
    ui->ArrayEdit->setAlignment(Qt::AlignCenter);
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

