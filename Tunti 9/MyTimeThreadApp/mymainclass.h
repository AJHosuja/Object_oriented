#ifndef MYMAINCLASS_H
#define MYMAINCLASS_H
#include "mytimetouithreadclass.h"
#include "mytimetofilethreadclass.h"
#include <QObject>
#include <QDebug>

class MyMainClass : public QObject
{
    Q_OBJECT
public:
    MyMainClass(QObject *parent = nullptr);
    ~MyMainClass();
signals:
       void finishProgram();


public slots:
       void mySlotFunction();

private:
     MyTimeToUIThreadClass *objectMyTimeToUIThreadClass;
     MyTimeToFileThreadClass *objectMyTimeToFileThreadClass;
};

#endif // MYMAINCLASS_H
