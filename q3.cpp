/* Name: Saad
   Roll No: i262503
   Assignment: PF_02 */
#include <iostream>
using namespace std;

int main(){
    int roomSignal,main_door,window,motion,emergency,maintenance_mode,zone_number,access_level,incident_code,original_incident_code;
    cout << "Enter the roomsignal: ";
    cin >> roomSignal;

    main_door = (roomSignal >> 0) & 1;
    window = (roomSignal >> 1) & 1; 
    motion = (roomSignal >> 2) & 1;
    emergency = (roomSignal >> 3) & 1;
    zone_number = (roomSignal >> 4) & 7;
    access_level = (roomSignal >> 7) & 3;
    incident_code = (roomSignal >> 9) & 15;
    original_incident_code = incident_code ^ 5;
    maintenance_mode = (roomSignal >> 13) & 1;

    if(emergency == 1)
        { cout << "Emergency" << endl;}
    else if(maintenance_mode == 1)
        {cout << "Maintenance" << endl;}
    else if((main_door == 1 || window == 1) && access_level == 0 )
        {cout << "UnAuthorized Access" << endl;}
    else if(motion  == 1 && original_incident_code >= 9)
        {cout << "Secuirty Alert" << endl;}
    else if((main_door == 0 && window == 0 && motion == 0 && emergency == 0) && original_incident_code == 0 )
                            {cout << "Room Secure" << endl;}
    else
        cout << "Monitoring Required" << endl;
    
    return 0;
}
