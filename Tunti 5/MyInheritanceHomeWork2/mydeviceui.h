#ifndef MYDEVICEUI_H
#define MYDEVICEUI_H
#include "devicemouse.h"
#include "devicetouchpad.h"
#include "devicedisplay.h"

class MyDeviceUI
{
public:
    MyDeviceUI();

    void uiShowMenu();
    void uiSetMouseInformation();
private:
     DeviceMouse objectDeviceMouse1;
     DeviceTouchPad objectDeviceTouchPad;
};

#endif // MYDEVICEUI_H
