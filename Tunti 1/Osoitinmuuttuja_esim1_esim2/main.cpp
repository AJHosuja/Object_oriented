#include <iostream>
using namespace std;
int main()
{
short kokonaislukuYksi;
// Kun osoitinmuuttuja esitellään/määritellään, laitetaan muuttujan eteen merkki *
short *osoitinmuuttuja = nullptr; // nullptr arvo voidaan antaa arvoksi osoitinmuuttujille, jotta osoittimet eivät jää alustamatta.
kokonaislukuYksi = 10;
osoitinmuuttuja = &kokonaislukuYksi; // osoitinmuuttuja saa muistiosoitteen arvokseen.
cout << "kokonaislukuYksi muistiosoite: " << &kokonaislukuYksi << endl;
cout << "kokonaislukuYksi arvo: " << kokonaislukuYksi << endl;
cout << "osoitinmuuttuja muistiosoite: " << &osoitinmuuttuja << endl;
cout << "osoitinmuuttuja arvo on aina muistiosoite: " << osoitinmuuttuja << endl;
cout << "osoitinmuuttuja osoittaa arvoon: " << *osoitinmuuttuja << endl;
return 0;
}
