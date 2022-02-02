#include <QCoreApplication>
#include <QObject>
#include <QDebug>

#include "myclass.h"
int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    MyClass *b = new MyClass;

    QObject::connect(b, SIGNAL(finishProgram()),
                     &a, SLOT(quit()), Qt::QueuedConnection);


    b->raiseFinishProgramSignal();

    qDebug() << "Sanomajonosta poistuttu, koska sinne saapui viesti quit()";

    int execReturnValue;
    execReturnValue = a.exec();
    return execReturnValue;

}
