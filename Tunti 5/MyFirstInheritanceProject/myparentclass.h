#ifndef MYPARENTCLASS_H //yliluokka
#define MYPARENTCLASS_H
#include "mybaseclass.h"

class MyParentClass: public MyBaseClass
{
public:
    MyParentClass();
    ~MyParentClass();
    void myParentMemberFunction();
protected:
    short myParentMemberVariable;


};

#endif // MYPARENTCLASS_H
