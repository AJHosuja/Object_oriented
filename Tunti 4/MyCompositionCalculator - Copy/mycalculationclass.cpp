#include "mycalculationclass.h"

MyCalculationClass::MyCalculationClass()
{

}

MyCalculationClass::~MyCalculationClass()
{

}

double MyCalculationClass::sum(double parameterOne, double parameterTwo)
{
    double summa = parameterOne + parameterTwo;
    return summa;

}

double MyCalculationClass::erot(double parameterOne, double parameterTwo)
{
    double miinus = parameterOne - parameterTwo;
    return miinus;

}

double MyCalculationClass::tulo(double parameterOne, double parameterTwo)
{
    double tulo = parameterOne * parameterTwo;
    return tulo;
}

double MyCalculationClass::osamaara(double parameterOne, double parameterTwo)
{
    double jako = parameterOne / parameterTwo;
    return jako;
}
