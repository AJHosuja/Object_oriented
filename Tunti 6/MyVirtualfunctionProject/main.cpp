#include "mysubclass.h"
int main()
{
MySubClass *objectMySubClass = new MySubClass;

    //objectMySubClass->functionOne();
    objectMySubClass->functionTwo();
    objectMySubClass->MyParentClass::functionOne();

    delete objectMySubClass;
    objectMySubClass = nullptr;
return 0;
}
