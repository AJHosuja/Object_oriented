#ifndef STANDARDCALCULATOR_H
#define STANDARDCALCULATOR_H
using namespace std;

class StandardCalculator
{
public:

    int summa(int x,int y); // Jäsenfunktio
    int erotus(int x,int y);
    int tulo(int x,int y);
    int osamaara(int x,int y);
    void tulos(int x, int y);

private:

    int kerroin, plus, miinus, jako; // jäsenmuuttuja
};

#endif // STANDARDCALCULATOR_H
