#ifndef SHAPEMANAGER_H
#define SHAPEMANAGER_H

#include <QObject>
#include <QGraphicsView>
#include <QGraphicsScene>
#include <QGraphicsRectItem>
#include <QRandomGenerator>
#include <QVector>
#include <QTimer>

class ShapeManager:public QObject
{
    Q_OBJECT

private:
    QGraphicsScene *myscene;
    QRandomGenerator *randomGenerator;
    QVector <QGraphicsRectItem*> rectItem;
    QVector <QGraphicsTextItem*> textItem;
    QVector <int>*myArray;
    QTimer *timer;
public:
    ShapeManager(QGraphicsScene *scene);
    void creatRect();//测试功能
    int paint();
    int reviseArray(QVector<int> &temp);
    void highLightRectangle(int index,const QColor &color=Qt::red);
    void bubbleSortVisualization();
};

#endif // SHAPEMANAGER_H
