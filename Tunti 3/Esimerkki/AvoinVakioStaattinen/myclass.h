#ifndef MYCLASS_H
#define MYCLASS_H
#include <iostream>
using namespace std;

class myClass
{
public:
void setData(short paramValue);

void showData() const;
static void jasenfunktio();
private:

static short laskuriMuuttuja;
short myVariable;

};

#endif // MYCLASS_H
