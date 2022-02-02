#include <iostream>
#include "printdata.h"
using namespace std;
#include <string>


void PrintData::print(int parameter)
{

    cout << parameter << " "
    << "luku int muodossa" << endl;
    cout << endl;
}

void PrintData::print(double parameter)
{
    cout << parameter << " "
    << "luku double muodossa" << endl;
    cout << endl;
}

void PrintData::print(char parameter)
{
    cout << parameter << " "
    << "luku char muodossa" << endl;
    cout << endl;
}

void PrintData::print(string parameter)
{
    cout << parameter << " "
    << "luku string muodossa" << endl;
    cout << endl;
}
