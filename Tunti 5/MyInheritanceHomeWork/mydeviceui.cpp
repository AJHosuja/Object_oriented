#include "mydeviceui.h"

MyDeviceUI::MyDeviceUI()
{

}

MyDeviceUI::~MyDeviceUI()
{
    objectDeviceMouse = nullptr;
    objectDeviceDisplay = nullptr;
    objectDeviceTouchpad = nullptr;

    delete objectDeviceDisplay;
    delete objectDeviceMouse;
    delete objectDeviceTouchpad;


}

void MyDeviceUI::uiShowMenu()
{
    cout << "DEVICE MENU" << endl
         << "===========" << endl
         << "1: Set Mouse Information" << endl
         << "2: Set Touch Pad Information" << endl
         << "3: Set Display Information" << endl
         << "4: Show Devices Information" << endl
         << "5: Finish" << endl;
        short valinta;
        cin >>  valinta;

        if (valinta>0 && valinta<5) {
            switch (valinta) {
            case 1:
                objectDeviceMouse = new DeviceMouse;
                this->uiSetMouseInformation();

            break;
            case 2:
                objectDeviceTouchpad = new DeviceTouchPad;
                this->uiSetTouchPadInformation();

            break;
            case 3:
                objectDeviceDisplay = new DeviceDisplay;
               this->uiSetDisplayInformation();

            break;
            case 4:
                this->uiShowDeviceInformation();

            break;
            }
        }
        if (valinta == 5) {
            return;

        }



}

void MyDeviceUI::uiSetMouseInformation()
{

    objectDeviceMouse->setPrimaryButton();
    this->uiShowMenu();
}




void MyDeviceUI::uiSetTouchPadInformation()
{
    objectDeviceTouchpad->setTouchPadSensivity();
    this->uiShowMenu();
}

void MyDeviceUI::uiSetDisplayInformation()
{
    objectDeviceDisplay->setDisplayResolution();
    this->uiShowMenu();
}

void MyDeviceUI::uiShowDeviceInformation()
{
    cout << "Mouse ID: " << objectDeviceMouse->getDeviceID() << endl
         << "Mouse information: " << objectDeviceMouse->getPrimaryButton() << endl
         << "Touch Pad ID: " << objectDeviceTouchpad->getDeviceID() << endl
         << "Touch Pad Information: " << objectDeviceTouchpad->getTouchPadSensivity() << endl
         << "Display ID: " << objectDeviceDisplay->getDeviceID() << endl
         << "Display Information: " << objectDeviceDisplay->getDisplayResolution() << endl << endl << endl;
    uiShowMenu();
}
