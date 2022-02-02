#ifndef MYPARTCLASS_H // Osaluokka
#define MYPARTCLASS_H
#include <iostream>
using namespace std;

class MyPartClass
{
public:
    MyPartClass();
    ~MyPartClass();
    void myPartClassFunction();
    short mySecondPartClassFunction();
private:
    short myPartClassVariable;
};

#endif // MYPARTCLASS_H
