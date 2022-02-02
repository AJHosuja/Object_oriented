#include "myclass.h"
#include <iostream>
using namespace std;


MyClass::MyClass()
{

//    qDebug() << "hello" ;
//    QString objectQString = "Hello QString";
//    myObjectQString = "Hello my other QString";
//    myObjectQString.chop(3);
//            qDebug() << objectQString;
//    qDebug() << myObjectQString;
/*
    QString x = "free";
    QString y = "dom";
    x.append(y);
    qDebug() << x;

*/
//    QString intToStr;
//    int myIntVariable = 15;
//    intToStr.setNum(myIntVariable);
//    qDebug () << intToStr;

}

void MyClass::PrintMyList()
{
    QList<int> integerList = {
       15,
       32,
       123
    };
    for (int x=0; x<3; x++){
     qDebug() << integerList[x];
    }

    QList<QString> stringList = {
        "Tama",
        "on merkki",
        "jono"
    };
    QString stringi;
    foreach (stringi, stringList)
     qDebug() << stringi;

    QStringList fontit = {
        "Arial",
        "xseven",
        "jake"
    };

}

void MyClass::PrintMyStack()
{
    QStack<int> stack;
      stack.push(1);
      stack.push(2);
      stack.push(3);
      while (!stack.isEmpty())
          qDebug() << stack.pop();

}

void MyClass::printMyDirectoryContent()
{
   QDir a;
   a.setPath("C:/Qt/");
   a.setFilter(QDir::Files);
   a.setSorting(QDir::Name);
   QFileInfoList list = a.entryInfoList();
   QFileInfo fileInfo;


   for (int i = 0; i < list.size(); ++i)
   {
   fileInfo = list.at(i);
   qDebug() << fileInfo.fileName() << ":" << fileInfo.size();
   }

}




