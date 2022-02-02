#ifndef MYPARENTCLASS_H
#define MYPARENTCLASS_H
#include <iostream>
using namespace std;

class MyParentClass
{
public:

    void setValue(short paramValue);
    short getValue();
protected:
    short myParentProtectedMemberVariable;
private:
    short myParentPrivateMemberVariable;


};

#endif // MYPARENTCLASS_H
