/* Name: Saad
   Roll No: i262503
   Assignment: PF_02 */
#include <iostream>
using namespace std;

int main(){
    int Status,Wi_Fi,Bluetooth,GPS,Battery_Saver,Device_mode;
    cout << "Enter the setting of the device: ";
    cin >> Status;

    Wi_Fi = Status & 1;
    Bluetooth = (Status >> 1) & 1;
    GPS = (Status >> 2) & 1;
    Battery_Saver = (Status >> 3) & 1;
    Device_mode = (Status >> 4) & 3;

    if(Wi_Fi == 1)
        {
        cout << "Wi_Fi: ON" << endl;
        }
    else
        {
        cout << "Wi_Fi: OFF" << endl;
        }

    if(Bluetooth == 1)
        {
        cout << "Bluetooth: ON" << endl;
        }
    else
        {
        cout << "Bluetooth: OFF" << endl;
        }
    
    if( GPS == 1)
        {
        cout << "GPS: ON" << endl;
        }
    else
        {
        cout << "GPS: OFF" << endl;
        }

    if( Battery_Saver == 1)
        {
        cout << "Battery_Saver: ON" << endl;
        }
    else
        {
        cout << "Battery_Saver: OFF" << endl;
        }

    if( Device_mode == 00)
        {
        cout << "Device_mode: Normal" << endl;
        }
    else if(Device_mode == 01)
        {
        cout << "Device_mode: Silent" << endl;
        }
    else if(Device_mode == 10)
        {
        cout << "Device_mode: Performance" << endl;
        }      
    else
        {
        cout << "Device_mode: Gaming" << endl;
        }

    return 0;
}

