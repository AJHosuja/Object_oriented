#include "devicetouchpad.h"

DeviceTouchPad::DeviceTouchPad()
{

}

void DeviceTouchPad::setTouchPadSensivity()
{
    cout << "SET DISPLAY INFORMATION" << endl
         << "=======================" << endl;

    setDeviceID();


    int x = 1;
    while (x == 1) {
        cout << "Type Touch Pad sensivity 1-5" << endl;
        cin >> TouchPadSensivity;

        if (TouchPadSensivity <6 && TouchPadSensivity>0){
            x++;
            cout << endl;
        }
        else {
            cout << "You gave number which is not 1 - 5. Please try again..." << endl;
        }
    }
}

short DeviceTouchPad::getTouchPadSensivity()
{
    return TouchPadSensivity;
}
