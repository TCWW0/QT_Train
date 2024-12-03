#ifndef SHAPEMANAGER_H
#define SHAPEMANAGER_H


#include <QObject>
#include <QGraphicsView>
#include <QGraphicsScene>
#include <QGraphicsRectItem>
#include <QRandomGenerator>
#include <QVector>
#include <QTimer>
#include <QTextEdit>
#include <QString>
#include <QMainWindow>

class ShapeManager:public QObject
{
    Q_OBJECT

    //老实了，还是老老实实用容器吧，内存管理这块太难找了
private:
    QGraphicsScene *myscene;
    QRandomGenerator *randomGenerator;
    QVector <QGraphicsRectItem*> rectItem;
    QVector <QGraphicsTextItem*> textItem;
    QVector <int>myArray;
    QTimer *timer;
    QTextEdit *debugOutput;
    int currentStep;

public:
    ShapeManager(QGraphicsScene *scene, QTextEdit *debugOutputWidget);
    void creatRect();//测试功能
    int paint();
    int reviseArray(QVector<int> &temp);
    void highLightRectangle(int index,const QColor &color=Qt::red);
    void bubbleSortVisualization();
    void onSortHigh();
    void updateDebugOutput(QString text);
    void outputBeautify();
};

#endif // SHAPEMANAGER_H
