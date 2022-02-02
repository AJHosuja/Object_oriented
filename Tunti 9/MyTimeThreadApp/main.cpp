#include <QCoreApplication>
#include "mymainclass.h"


int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    MyMainClass *b = new MyMainClass;

    QObject::connect(b, SIGNAL(finishProgram()),
                    &a, SLOT(quit()));





    int execReturnValue = a.exec();
    return execReturnValue;
    delete b;
    b = nullptr;
}
