#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QGraphicsView>
#include <QGraphicsScene>
#include <QGraphicsRectItem>

#include "shapemanager.h"

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
    void setInputProperties();

private slots:
    void on_ArrayEdit_editingFinished();

    void on_bubbleSortButton_clicked();

private:
    Ui::MainWindow *ui;
    QGraphicsScene *scene; // 场景
    ShapeManager *shapeManager;
};
#endif // MAINWINDOW_H
