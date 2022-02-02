#include <iostream>

using namespace std;
short luku1, luku2;

void vaihda(short *parametriLukuYksi, short *parametriLukuKaksi){

    short luku1_1 = *parametriLukuKaksi;
    short luku2_1 = *parametriLukuYksi;

    luku1=luku1_1;
    luku2=luku2_1;

    return;

}

int main()
{
    luku1 = 10;
    luku2 = 32;

    vaihda(&luku1, &luku2);

    cout << luku1 << endl;
    cout << luku2 << endl;

    return 0;
}


