#include <iostream>
using namespace std;



void vaihda(short &parametriLukuYksi, short &parametriLukuKaksi)
{

    short luku2_2 = parametriLukuKaksi;
    parametriLukuKaksi = parametriLukuYksi;
    parametriLukuYksi = luku2_2;


}
int main()
{
    short luku1=43;
    short *viittaus_a = &luku1;
    short luku2=35;
    short *viittaus_b = &luku2;

    vaihda(luku1, luku2);

    cout << luku1 << endl;
    cout << luku2 << endl;
    cout << &viittaus_a << endl;
    cout << *viittaus_b << endl;

return 0;
}

//#include <iostream>
//using namespace std;



//void vaihda(short *parametriLukuYksi, short *parametriLukuKaksi)
//{

//    short luku1_1 = *parametriLukuYksi;



//   *parametriLukuKaksi = luku1_1;
//    *parametriLukuYksi = *parametriLukuKaksi;

//}
//int main()
//{
//    short luku1=43;
//    short luku2=35;

//    vaihda(&luku1, &luku2);

//    cout << luku1 << endl;
//    cout << luku2 << endl;

//return 0;
//}
