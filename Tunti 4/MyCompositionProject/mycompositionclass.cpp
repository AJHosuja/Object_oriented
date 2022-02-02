#include "mycompositionclass.h"

MyCompositionClass::MyCompositionClass()
{
    //short testi = objectMyPartClass.mySecondPartClassFunction();
    cout << "MyCompositionClass muodostinfunktio" << endl;
    /*  objectMyPartClass.myPartClassFunction();
    cout << "Osaluokan jasenmuuttuja "
    "myPartClassVariable = "<<
    testi
    << endl;   */

    objectMyPartClass = new MyPartClass;
    objectMyPartClass->myPartClassFunction();
    cout << "Osaluokan jasenmuuttuja" <<
    objectMyPartClass->mySecondPartClassFunction() << endl;
}

MyCompositionClass::~MyCompositionClass()
{
    cout << "MyCompositionClass tuhoajafunktio" << endl;
    delete objectMyPartClass;
    objectMyPartClass = nullptr;

}
