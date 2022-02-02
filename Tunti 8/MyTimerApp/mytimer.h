#ifndef MYTIMER_H
#define MYTIMER_H
#include <QObject>
#include <QTimer>
#include <QDebug>


class MyTimer : public QObject
{

    Q_OBJECT
public:
    MyTimer(QObject *parent = nullptr);
    ~MyTimer();

private:
    QTimer *objectQTimer;
    short timerCounter;

public slots:
    void myTimerSlot();

signals:
    void finishProgram();
};
#endif // MYTIMER_H
