#include "devicemouse.h"

DeviceMouse::DeviceMouse()
{

}



void DeviceMouse::setPrimaryButton()
{
    cout << "SET MOUSE INFORMATION" << endl
         << "=====================" << endl;

    setDeviceID();
    int x = 1;
    while (x == 1) {


        cout << "1 = right, 2= left: " ;
        cin >> primaryButton;
         if (primaryButton <3 && primaryButton>0){

            x++;
            cout << endl;
        }
        else {
            cout << "You gave number which is not 1 or 2. Please try again..." << endl;
        }
    }


}

short DeviceMouse::getPrimaryButton()
{
    return primaryButton;
}
