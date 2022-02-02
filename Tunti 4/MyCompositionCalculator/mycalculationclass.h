#ifndef MYCALCULATIONCLASS_H // Osaluokka
#define MYCALCULATIONCLASS_H
#include <iostream>
using namespace std;

class MyCalculationClass
{
public:
    MyCalculationClass();
    ~MyCalculationClass();
    double sum(double parameterOne, double parameterTwo);
    double erot(double parameterOne, double parameterTwo);
    double tulo(double parameterOne, double parameterTwo);
    double osamaara(double parameterOne, double parameterTwo);
};

#endif // MYCALCULATIONCLASS_H
