#ifndef MYUICLASS_H // Koosteluokka
#define MYUICLASS_H
#include "mycalculationclass.h"
#include <iostream>
using namespace std;


class MyUiClass
{
public:
    MyUiClass();
    ~MyUiClass();
    void showMenu();
    void inputNumbers();
    void showResult(short parameter);
private:
    MyCalculationClass *objectMyCalculationClass;
    double numberOne, numberTwo, result;
    short valinta;
};

#endif // MYUICLASS_H
