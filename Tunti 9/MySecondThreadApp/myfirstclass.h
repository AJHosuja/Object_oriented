#ifndef MYFIRSTCLASS_H
#define MYFIRSTCLASS_H
#include <QThread>
#include <QDebug>

class myFirstClass: public QThread
{
public:
    myFirstClass();

protected:
    virtual void run() override;

};

#endif // MYFIRSTCLASS_H
