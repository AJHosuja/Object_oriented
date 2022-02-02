#ifndef DEVICEMOUSE2_H
#define DEVICEMOUSE2_H


#include "devicebaseclass.h"

class DeviceMouse2: public DeviceBaseClass
{
public:
    DeviceMouse2();
    void setPrimaryButton();
    short getPrimaryButton();
    short kissa;

private:

    short primaryButton;
};

#endif // DEVICEMOUSE2_H
