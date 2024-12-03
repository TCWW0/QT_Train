#ifndef SORTWORKET_H
#define SORTWORKET_H

#include <QObject>
#include <QThread>

class SortWorket : public QObject
{
    Q_OBJECT
public:
    explicit SortWorket(QObject *parent = nullptr);

signals:
};

#endif // SORTWORKET_H
