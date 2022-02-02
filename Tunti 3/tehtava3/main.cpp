#include <iostream>
#include <standardcalculator.h>
using namespace std;

int main()
{
    int x = 180;
    int y = 90;
    StandardCalculator *E1 = new StandardCalculator;

    E1->summa(x,y);
    E1->erotus(x,y);
    E1->tulo(x,y);
    E1->osamaara(x,y);
    E1->tulos(x,y);
    E1 = nullptr;
    delete E1;


    return 0;
}
