#include "bubblesort.h"

BubbleSort::BubbleSort(QGraphicsScene *scene, QTextEdit *debugOutputWidget)
    :ArrayBasic(scene ,debugOutputWidget)
{}

void BubbleSort::bubblesort()
{
    int Size=myArray.size();
    for(int i=0;i<Size-1;i++)
    {
        for(int j=0;j<Size-i-1;++j)
        {
            if(myArray[j]>myArray[j+1])
            {

                Swap(j,j+1);
                myscene->update();
            }
        }
    }
}

void BubbleSort::specialSort()
{
    if(myArray.empty())
    {
        qDebug()<<"数组为空，无法排序";
    }
    bubblesort();
}
