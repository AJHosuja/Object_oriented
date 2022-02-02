#include "myfirstclass.h"

myFirstClass::myFirstClass()
{

}

void myFirstClass::run()
{

    for (short i=0;i<10;i++)
    {
    qDebug() << "First thread =" << i;
    msleep(1000);
    }
    qDebug() << "First thread finished";


}
