#ifndef MYPARENTCLASS_H
#define MYPARENTCLASS_H
#include <iostream>
using namespace std;


class MyParentClass
{
public:
    MyParentClass();
    ~MyParentClass();
    virtual void functionOne();
    virtual void functionTwo();
};

#endif // MYPARENTCLASS_H
