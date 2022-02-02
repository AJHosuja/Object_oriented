#include "mytimetofilethreadclass.h"


void MyTimeToFileThreadClass::run()
{
    QFile file ("C:/temp/myFile.txt");
    if (!file.open(QIODevice::WriteOnly | QIODevice::Text))
            return;


    QTextStream out(&file);
    for ( i=0; i<10; i++){
    objectQString = QTime::currentTime().toString();
    out << objectQString << "\n";
    qDebug() << "Write operation " << i << "done!";
    msleep(1000);
    }
    qDebug() << "MyTimeToFileThreadClass run() -function finished!";
}
