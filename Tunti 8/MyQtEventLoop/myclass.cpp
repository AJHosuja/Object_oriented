#include "myclass.h"

MyClass::MyClass(QObject *parent) : QObject(parent)
{
    qDebug() << "Olio objectMyClass luotu";
    connect(this, SIGNAL(myFirstSignal()), this, SLOT(myFirstSlotFunction()), Qt::QueuedConnection);

    qDebug() << "Signaali myFirstSignal() ylos";
    emit myFirstSignal(); // emit kaskylla nostetaan signaali ylos ja suoritetaan siihen liittyva SLOT-jasenfunktio.

}

MyClass::~MyClass()
{
    qDebug() << "Olio objectMyClass tuhottu";
}

void MyClass::raiseFinishProgramSignal()
{
    qDebug() << "Signaali finishProgram() ylos";
    emit finishProgram();

}

void MyClass::myFirstSlotFunction()
{

    qDebug() << "Ollaan SLOT -jasenfunktiossa myFirstSlotFunction() koska signaali myFirstSignal() suoritettiin";

}
