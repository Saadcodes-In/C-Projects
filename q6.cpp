/* Name: Saad
   Roll No: i262503
   Assignment: PF_02 */
#include <iostream>
using namespace std;

int main()
{
    int declared_value, weight_category, origin, destination;
    int number_of_restricted_items, documentation_status, inspection_status, insurance_status, importer_type;
    int priority_level, shipment_flagged, category, origin_verification;

    cout << "Is the documentation complete (1: Yes | 0: No): ";
    cin >> documentation_status;
    if(documentation_status == 1)
    {
	cout << "Enter origin category (1: High Risk | 2: Normal): ";
        cin >> origin;
	cout << "Enter importer type (1: New | 2: Regular): ";
        cin >> importer_type;
        if(origin == 1)
        {
	    if(importer_type == 1)
            {
                cout << "Enter origin verification status (1: Passed | 0: Failed): ";
                cin >> origin_verification;
		if(origin_verification == 0)
                {
                    cout << "Shipment Rejected";
                    return 0;
                }
            }
        }

        cout << "Enter declared value: ";
        cin >> declared_value;
	cout << "Enter weight category (1: Light | 2: Normal | 3: Very Heavy): ";
        cin >> weight_category;
        if(declared_value >= 100000)
        {
	    cout << "Enter inspection status (1: Passed | 0: Failed): ";
            cin >> inspection_status;
	    if(inspection_status == 0)
            {
                cout << "Manual Review";
                return 0;
            }
            if(weight_category == 3)
            {
                cout << "Enter inspection status for heavy shipment "
                     << "(1: Passed | 0: Failed): ";
                cin >> inspection_status;
                if(inspection_status == 0)
                {
                    cout << "Manual Review";
                    return 0;
                }
            }
        }
        else
        {
            if(weight_category == 3)
            {          
                cout << "Enter inspection status (1: Passed | 0: Failed): ";
                cin >> inspection_status;
                if(inspection_status == 0)
                {
                    cout << "Shipment Rejected";
                    return 0;
                }
            }
        }
        cout << "Enter number of restricted items: ";
        cin >> number_of_restricted_items;
        if(number_of_restricted_items > 0)
        {
            cout << "Enter destination category "
                 << "(1: Normal | 2: Sensitive): ";
            cin >> destination;
            if(number_of_restricted_items > 5)
            {
                if(destination == 2)
                {
                    cout << "Shipment Rejected";
                    return 0;
                }
                else
                {
                    cout << "Manual Review";
                    return 0;
                }
            }
            else
            {
                if(destination == 2)
                {
                    cout << "Manual Review";
                    return 0;
                }
            }
        }
        cout << "Enter insurance status (1: Valid | 0: Invalid): ";
        cin >> insurance_status;
        if(insurance_status == 0)
        {
            cout << "Manual Reiew";
            return 0;
        }
        cout << "Has the shipment previously been flagged by customs " << "(1: Yes | 0: No): ";
        cin >> shipment_flagged;
        if(shipment_flagged == 1)
        {
            cout << "Manual Review";
            return 0;
        }
        cout << "Enter priority level (1: Priority | 0: Normal): ";
        cin >> priority_level;
        if(priority_level == 1)
        {
            cout << "Priority Clearance";
        }
        else
        {
            cout << "Shipment Cleared";
        }
    }
    else
    {
        cout << "Enter category " << "(1: Allowed Temporary Clearance | " << "0: Not Allowed): ";
        cin >> category;
        if(category == 1)
        {
            cout << "Temporarily Cleared";
        }
        else
        {
            cout << "Shipment Rejected";
        }
    }

    return 0;
}
