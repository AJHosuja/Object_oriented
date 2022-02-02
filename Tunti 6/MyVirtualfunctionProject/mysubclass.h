#ifndef MYSUBCLASS_H
#define MYSUBCLASS_H
#include "myparentclass.h"

class MySubClass:MyParentClass
{
public:
    MySubClass();
    ~MySubClass();
    virtual void functionTwo() override;
};

#endif // MYSUBCLASS_H
