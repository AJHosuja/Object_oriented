#include "mytimetouithreadclass.h"



void MyTimeToUIThreadClass::run()
{



    for (i=0;i<=10;i++){

        objectQString = QTime::currentTime().toString();
        qDebug() << objectQString;

        msleep(1000);

    }

    qDebug() << " MyTimeToUIThreadClass run() -function finished!";
}
