#include <QCoreApplication>
#include "myfirstclass.h"
#include "mysecondclass.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    myFirstClass *objectMyFirstClass = new myFirstClass;
    mySecondClass *objectMysecondClass = new mySecondClass;


    objectMyFirstClass->start();
    objectMysecondClass->start();
    int execReturnValue;
    execReturnValue = a.exec();

    delete objectMyFirstClass;
    delete objectMysecondClass;
    objectMyFirstClass = nullptr;
    objectMysecondClass = nullptr;
    return execReturnValue;
}
