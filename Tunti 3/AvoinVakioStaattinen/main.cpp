#include <iostream>
using namespace std;


class MyClass
{
public:
void setData(short paramValue) // tama on avoinfunktio, koska koodi on luokan rakenteessa
{
myVariable = paramValue;

    this->myStaticFunction();
}

void showData() const // tama on seka vakio- etta avoinfunktio
{
cout << "myVarible= " << myVariable << endl;

}
static void myStaticFunction()
{
myStaticVariable++;
cout << "Luokan staattisen muuttujan arvo= " << myStaticVariable << endl;
}
private:
static short myStaticVariable;

static short laskuriMuuttuja;
short myVariable;

};


short MyClass::myStaticVariable = 0;

int main()
{

MyClass objectMyClass;
objectMyClass.setData(100);
objectMyClass.showData();
MyClass objectMyClass2; // luodaan toinen olio.
objectMyClass2.myStaticFunction(); // kutsutaan staattista jasenfunktiota
    MyClass::myStaticFunction();
return 0;
}
