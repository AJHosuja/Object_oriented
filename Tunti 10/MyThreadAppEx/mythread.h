#ifndef MYTHREAD_H
#define MYTHREAD_H
#include "mainwindow.h"
#include <QThread>
#include <QTimer>

class MainWindow;

class MyThread: public QThread
{
public:
    MyThread();

protected:
    virtual void run() override;

private:
    MainWindow *objectMainWindow;
    QTimer *objectQTimer;

public slots:
    void sendDataToUi();

};

#endif // MYTHREAD_H
