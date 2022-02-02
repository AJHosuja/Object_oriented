#ifndef DEVICETOUCHPAD_H
#define DEVICETOUCHPAD_H
#include "devicebaseclass.h"

class DeviceTouchPad: public DeviceBaseClass
{
public:
    DeviceTouchPad();
    void setTouchPadSensivity();
    short getTouchPadSensivity();
private:
    short TouchPadSensivity;
};

#endif // DEVICETOUCHPAD_H
