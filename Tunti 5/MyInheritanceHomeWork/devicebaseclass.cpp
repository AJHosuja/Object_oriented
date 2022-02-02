#include "devicebaseclass.h"

DeviceBaseClass::DeviceBaseClass()
{

}

void DeviceBaseClass::setDeviceID()
{
    int x = 1;
    while (x==1) {
    cout << "Set Device ID (4) digits: " ;
    cin >> deviceID;

    if (deviceID<10000 && deviceID>999) {

    x++;
    }
    else {
        cout << "Number was incorrect, please try again..." << endl;

    }

    }
}

short DeviceBaseClass::getDeviceID()
{
    return deviceID;
}
