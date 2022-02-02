#include "devicemouse.h"

DeviceMouse::DeviceMouse()
{

}

void DeviceMouse::setMouseInformation()
{
    short z = 1;
    while (z==1) {
    cout << "anna luku 1-2" << endl;
    cin >> primaryButton;

    if (primaryButton<3 && primaryButton>0) {

       cout << "Annoit: " << primaryButton << endl;
       z++;
    }

    else {
        cout << "laitoit vaarin yrita uudestaan" << endl;
    }
    }
}
