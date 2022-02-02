#include <QCoreApplication>
#include "myreadfileclass.h"


int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    MyReadFileClass *b = new MyReadFileClass;
    QObject::connect(b, SIGNAL(finishProgram()), &a, SLOT(quit()),
                     Qt::QueuedConnection);

    b->readfile();

    int execReturnValue;
    execReturnValue = a.exec();
    return execReturnValue;
}
