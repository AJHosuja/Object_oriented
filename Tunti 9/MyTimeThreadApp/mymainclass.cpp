#include "mymainclass.h"

MyMainClass::MyMainClass(QObject *parent) : QObject(parent)
{
    objectMyTimeToUIThreadClass = new MyTimeToUIThreadClass;
    objectMyTimeToFileThreadClass = new MyTimeToFileThreadClass;

    QObject::connect(objectMyTimeToFileThreadClass,
            SIGNAL(finished()), this, SLOT(mySlotFunction()));

    objectMyTimeToFileThreadClass->start();
    objectMyTimeToUIThreadClass->start();

}

MyMainClass::~MyMainClass()
{


    delete objectMyTimeToFileThreadClass;
    delete objectMyTimeToUIThreadClass;


}

void MyMainClass::mySlotFunction()
{

    qDebug() << ":D";
}
