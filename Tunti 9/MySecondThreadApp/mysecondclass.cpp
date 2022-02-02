#include "mysecondclass.h"

mySecondClass::mySecondClass()
{

}

void mySecondClass::run()
{


    for (short i=0;i<10;i++)
    {
    qDebug() << "Second thread =" << i;
    msleep(2000);
    }
    qDebug() << "Second thread finished";
}
