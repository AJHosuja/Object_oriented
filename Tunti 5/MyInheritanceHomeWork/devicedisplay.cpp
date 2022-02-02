#include "devicedisplay.h"

DeviceDisplay::DeviceDisplay()
{

}

void DeviceDisplay::setDisplayResolution()
{

    cout << "SET DISPLAY INFORMATION" << endl
         << "=======================" << endl;

    setDeviceID();
    int x = 1;
    while (x == 1) {

        cout << "Type resolution 1-10" << endl;


        cin >> displayResolution;

        if (displayResolution <11 && displayResolution>0){
          x++;
          cout << endl;


        }
        else {
            cout << "You gave number which is not 1-10. Please try again..." << endl;


        }
   }
}

short DeviceDisplay::getDisplayResolution()
{
    return displayResolution;
}
