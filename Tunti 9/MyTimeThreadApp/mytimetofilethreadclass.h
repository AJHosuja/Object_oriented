#ifndef MYTIMETOFILETHREADCLASS_H
#define MYTIMETOFILETHREADCLASS_H
#include <QThread>
#include <QString>
#include <QDebug>
#include <QTime>
#include <QFile>
#include <QTextStream>


class MyTimeToFileThreadClass : public QThread
{
public:


protected:
    virtual void run() override;

private:
    QString objectQString;
    QTime objectQTime;
    QTextStream objectQTextStream;
    QFile objectQFile;
    short i;



};

#endif // MYTIMETOFILETHREADCLASS_H
