#include "mypartclass.h"

MyPartClass::MyPartClass()
{
    cout << "MyPartClass muodostinfunktio" << endl;
    myPartClassVariable = 125;

}

MyPartClass::~MyPartClass()
{
    cout << "MyPartClass tuhoajafunktio" << endl;
}

void MyPartClass::myPartClassFunction()
{
    cout << "Ollaan osaluokan MyPartClass "
            "jasenfunktiossa myPartClassFunction()" << endl;
}

short MyPartClass::mySecondPartClassFunction()
{
    return myPartClassVariable;

}
