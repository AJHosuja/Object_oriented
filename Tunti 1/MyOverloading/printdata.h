#include <iostream>
#ifndef PRINTDATA_H
#define PRINTDATA_H
using namespace std;
#include <string>

class PrintData
{
public:


    void print(int parameter);
    void print(double parameter);
    void print(char parameter);
    void print(string parameter);

};

#endif // PRINTDATA_H
