#ifndef DEVICEMOUSE_H
#define DEVICEMOUSE_H
#include "devicebaseclass.h"
#include "devicetouchpad.h"
#include <iostream>
using namespace std;

class DeviceMouse: DeviceBaseClass
{
public:
    DeviceMouse();
    void setMouseInformation();
    short getMouseInformation();
private:
    short primaryButton;

};

#endif // DEVICEMOUSE_H
