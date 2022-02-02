#ifndef MYCLASS_H
#define MYCLASS_H
#include <QtDebug>
#include <QString>
#include <Qlist>
#include <QStack>
#include <QDir>
#include <QFileInfo>
#include <QFileInfoList>


class MyClass
{
public:
    MyClass();
    void PrintMyList();
    void PrintMyStack();
    void printMyDirectoryContent();

private:
    QString myObjectQString;


};

#endif // MYCLASS_H
