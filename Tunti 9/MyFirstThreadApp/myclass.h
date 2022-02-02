#ifndef MYCLASS_H
#define MYCLASS_H
#include <QString>
#include <QThread>
#include <QDebug>


class MyClass : public QThread
{
public:
    MyClass(QString paramString);

protected:
    virtual void run() override;

private:
    QString threadName ;
};

#endif // MYCLASS_H
