 #ifndef BUBBLESORT_H
#define BUBBLESORT_H

#include "arraybasic.h"

class BubbleSort : public ArrayBasic
{
    Q_OBJECT
public:
    BubbleSort(QGraphicsScene *scene, QTextEdit *debugOutputWidget);
    void bubblesort();
    void specialSort();
};

#endif // BUBBLESORT_H
