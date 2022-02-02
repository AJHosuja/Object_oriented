#include <iostream>
using namespace std;

int main()
{
short kokonaislukumuuttuja=0;
kokonaislukumuuttuja=15;

    cout << "kokonaislukumuuttuja arvo: " << kokonaislukumuuttuja<< endl;
    cout << "kokonaislukumuuttuja ensimmainen muistiosoite: " << &kokonaislukumuuttuja<< endl;
    cout << "kokonaislukumuuttuja koko: " << sizeof(kokonaislukumuuttuja) << endl;
    return 0;
}
