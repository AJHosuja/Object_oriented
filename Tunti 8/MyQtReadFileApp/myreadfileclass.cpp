#include "myreadfileclass.h"

MyReadFileClass::MyReadFileClass(QObject *parent) : QObject(parent)
{

}

void MyReadFileClass::readfile()
{
    QFile file("C:/temp/myFile.txt");

    if (!file.open(QIODevice::ReadOnly | QIODevice::Text))
            return;

        QTextStream in(&file);
        while (!in.atEnd()) {
            QString line = in.readLine();
            qDebug() << line ;
        }
        emit finishProgram();
}
