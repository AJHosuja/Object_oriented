#include <iostream>
#include "printdata.h"
#include <string>

PrintData::PrintData()
{

}

void PrintData::print(int parameter)
{
   cout << parameter << endl;
   cout << "parametri int:muodossa" << endl;
}

void PrintData::print(double parameter)
{
    cout << parameter << endl;
    cout << "parametri double:muodossa" << endl;
}

void PrintData::print(char parameter)
{
    cout << parameter << endl;
    cout << "parametri merkkijonona:muodossa" << endl;

}

void PrintData::print(string parameter)
{
    cout << parameter << endl;
    cout << "parametri string:muodossa" << endl;

}
