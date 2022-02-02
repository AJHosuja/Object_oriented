#include "standardcalculator.h"
#include <iostream>


int StandardCalculator::summa(int x, int y)
{
    plus = x+y;
    this->erotus(x,y);
    return plus;

}

int StandardCalculator::erotus(int x, int y)
{
    miinus = x-y;
    this->tulo(x,y);
    return miinus;
}

int StandardCalculator::tulo(int x, int y)
{
    kerroin = x*y;
     this->osamaara(x,y);
    return  kerroin;
}

int StandardCalculator::osamaara(int x, int y)
{
    jako  = x/y;
     this->tulos(x,y);
    return jako;
}

void StandardCalculator::tulos(int x, int y)
{
   cout << x << "+" << y <<"=" << plus << endl;
   cout << "erotus:" << miinus<< endl;
   cout << "kerrottuna:" << kerroin << endl;
   cout << "jaettuna:" << jako << endl;
}
