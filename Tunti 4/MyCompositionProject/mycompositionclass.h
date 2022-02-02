#ifndef MYCOMPOSITIONCLASS_H //Koosteluokka
#define MYCOMPOSITIONCLASS_H
#include "mypartclass.h"
#include <iostream>
using namespace std;

class MyCompositionClass
{
public:
    MyCompositionClass();
    ~MyCompositionClass();

private:

    //MyPartClass objectMyPartClass;

    MyPartClass *objectMyPartClass;

};

#endif // MYCOMPOSITIONCLASS_H
