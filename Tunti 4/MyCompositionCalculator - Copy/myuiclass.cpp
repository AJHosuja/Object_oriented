#include "myuiclass.h"

MyUiClass::MyUiClass()
{

}

MyUiClass::~MyUiClass()
{
    objectMyCalculationClass = nullptr;
    delete objectMyCalculationClass;


}

void MyUiClass::showMenu()
{
    cout << "NELILASKIN" << endl;
    cout << "==========" << endl;
    cout << "1 = Summa" << endl;
    cout << "2 = Erotus" << endl;
    cout << "3 = Tulo" << endl;
    cout << "4 = Osamaara" << endl;
    cout << "5 = Lopeta" << endl;
    cout << "Valitse: ";
    cin >> valinta;
    if (valinta == 5) {
        cout << "Valitsit 5: eli lopeta" << endl;
        objectMyCalculationClass = nullptr;
        delete objectMyCalculationClass;
        abort();


    }

    if (0<valinta && valinta<5){
        inputNumbers();

    switch (valinta) {
        case 1:
            result = objectMyCalculationClass->sum(numberOne, numberTwo);
            showResult(valinta);

        break;
        case 2:
            result = objectMyCalculationClass->erot(numberOne, numberTwo);
            showResult(valinta);
        break;
        case 3:
            result = objectMyCalculationClass->tulo(numberOne, numberTwo);
            showResult(valinta);
        break;
        case 4:
            result = objectMyCalculationClass->osamaara(numberOne, numberTwo);
            showResult(valinta);
        break;
         }
         }

    else {
        cout << "valitsit luvun 1-5 ulkopuolelta. Yrita uudelleen" << endl;
        showMenu();

    }
}

void MyUiClass::inputNumbers()
{
    cout << endl;
    cout << endl;
    cout << "Anna luku yksi:";
    cin >> numberOne;
    cout << "Anna luku kaksi:";
    cin >> numberTwo;
    cout << endl;
    cout << endl;


}

void MyUiClass::showResult(short parameter)
{
    switch (parameter) {

        case 1:
        cout << numberOne << "+" << numberTwo << "=" << result << endl;
        showMenu();
        break;
        case 2:
        cout << numberOne << "-" << numberTwo << "=" << result << endl;
        showMenu();
        break;
        case 3:
        cout << numberOne << "*" << numberTwo << "=" << result << endl;
        showMenu();
        break;
        case 4:
        cout << numberOne << "/" << numberTwo << "=" << result << endl;
        showMenu();
        break;

    }

}
