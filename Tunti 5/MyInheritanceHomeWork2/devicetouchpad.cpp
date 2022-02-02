#include "devicetouchpad.h"

DeviceTouchPad::DeviceTouchPad()
{

}

void DeviceTouchPad::setTouchPadSensivity()
{
    short z = 1;
    while (z==1) {
    cout << "anna luku 1-5 hiiren herkkyydeksi: ";
    cin >> TouchPadSensivity;

    if (TouchPadSensivity<6 && TouchPadSensivity>0) {

       cout << "Annoit: " << TouchPadSensivity << endl;
       z++;
    }

    else {
        cout << "laitoit vaarin yrita uudestaan" << endl;
    }
    }

}
