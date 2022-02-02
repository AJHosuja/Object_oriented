#ifndef MYTIMETOUITHREADCLASS_H
#define MYTIMETOUITHREADCLASS_H
#include <QThread>
#include <QDebug>
#include <QTime>


class MyTimeToUIThreadClass: public QThread
{
public:

protected:
    virtual void run() override;

private:
    QString objectQString;
    QTime objectQTime;
    short i;


};

#endif // MYTIMETOUITHREADCLASS_H
