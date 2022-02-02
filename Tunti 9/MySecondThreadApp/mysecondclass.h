#ifndef MYSECONDCLASS_H
#define MYSECONDCLASS_H
#include <QThread>
#include <QDebug>

class mySecondClass: public QThread
{
public:
    mySecondClass();

protected:
    virtual void run() override;
};

#endif // MYSECONDCLASS_H
