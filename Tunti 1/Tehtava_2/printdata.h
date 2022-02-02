#ifndef PRINTDATA_H
#define PRINTDATA_H
#include <string>

class PrintData
{
public:
    PrintData();
    void print(int parameter);
    void print(double parameter);
    void print(char parameter);
    void print(string parameter);
};

#endif // PRINTDATA_H
