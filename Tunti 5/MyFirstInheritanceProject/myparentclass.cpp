#include "myparentclass.h"

MyParentClass::MyParentClass()
{
    cout << "MyParentClass muodostinfunktio" << endl;
    myParentMemberVariable = 10;

}

MyParentClass::~MyParentClass()
{
    cout << "MyParentClass tuhoaja" << endl;
}

void MyParentClass::myParentMemberFunction()
{
    cout << "MyParentClass luokan jasenfunktio myParentMemberFunction()" << endl;
    cout << "myParentMemberVariable jasenmuuttujan arvo= " << myParentMemberVariable << endl;
}
