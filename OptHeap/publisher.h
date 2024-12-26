#ifndef PUBLISHER_H
#define PUBLISHER_H





class HeapPublisher : public Publisher
{
public:
    //在构造函数中去进行观察者的注册
    HeapPublisher(observer* Observer);


};

#endif // PUBLISHER_H
