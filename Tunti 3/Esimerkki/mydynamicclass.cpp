#include "mydynamicclass.h"
#include <iostream>
using namespace std;
MyDynamicClass::MyDynamicClass()
{
    cout << "olio luotu" << endl;

}

MyDynamicClass::~MyDynamicClass()
{

        myMemberVariable = 0;
        cout << myMemberVariable << endl;

}

void MyDynamicClass::muodostin(short myMemberVariable)
{
   myMemberVariable = 15;

   cout << myMemberVariable << endl;

}
