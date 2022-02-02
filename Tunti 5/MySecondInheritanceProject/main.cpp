#include <iostream>
#include "myfirstsubclass.h"
#include "mysecondsubclass.h"
using namespace std;

int main()
{
    MyFirstSubClass *olio_a = new MyFirstSubClass;
    MySecondSubClass *olio_b = new MySecondSubClass;
    short luku1 = olio_a->getValue();
    short luku2 = olio_b->getValue();
    cout << luku1 << endl;
    cout << luku2 << endl;

    delete olio_a;
    olio_a = nullptr;
    delete olio_b;
    olio_b = nullptr;
    return 0;
}
