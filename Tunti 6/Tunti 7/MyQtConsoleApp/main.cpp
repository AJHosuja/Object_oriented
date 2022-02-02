#include <QCoreApplication>
#include <myclass.h>
int main(int argc, char *argv[])
{
    MyClass objectMyClass;
    QCoreApplication a(argc, argv);
    //objectMyClass.PrintMyList();
    objectMyClass.PrintMyStack();
    objectMyClass.printMyDirectoryContent();
    return a.exec();
}
