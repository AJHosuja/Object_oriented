#include <iostream>
#include "printdata.h"

using namespace std;

int main()
{

    PrintData testi;

    testi.print(1);
    testi.print(3.3);
    testi.print('4');
    testi.print("432");
    return 0;
}
