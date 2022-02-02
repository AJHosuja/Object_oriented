#include "mysubclass.h"

MySubClass::MySubClass()
{
    cout << "olemme Mysubclassin muodostin funktiossa" << endl;
}

MySubClass::~MySubClass()
{
    cout << "olemme Mysubclassin tuhoaja funktiossa" << endl;
}

void MySubClass::functionTwo()
{
    cout << "olemme Mysubclassin virtuaalisessa functiontwossa" << endl;
}
