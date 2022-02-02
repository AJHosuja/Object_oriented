#include "myclass.h"



void myClass::setData(short paramValue) // tama on avoinfunktio, koska koodi on luokan rakenteessa
{
    myVariable = paramValue;
}

void myClass::showData() const // tama on seka vakio- etta avoinfunktio
{
    cout << "myVarible= " << myVariable << endl;

}
