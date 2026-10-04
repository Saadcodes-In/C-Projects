/* Name: Saad
   Roll No: i262503
   Assignment: PF_02 */
#include <iostream>
using namespace std;

int main()
{
    int meal_category, serving_size, customer_type, dining_method, spice_preference, dietary_requirement, 
    time_of_order, availability_of_ingredient, customization_request, group_order;

    cout << "Meal Category " << "(1: Breakfast | 2: Main Course | 3: Dessert): ";
    cin >> meal_category;
    if (meal_category == 1)
    {
        cout << "Serving Size " << "(1: Small | 2: Medium | 3: Large): ";
        cin >> serving_size;

        if (serving_size == 1)
        {
            cout << "Spice Preference " << "(1: Mild | 2: Medium | 3: Spicy): ";
            cin >> spice_preference;

            if (spice_preference == 1 || spice_preference == 2)
            {
                cout << "Dining Method " << "(1: Dine-in | 2: Takeaway | 3: Delivery): ";
                cin >> dining_method;

                if (dining_method == 1)
                {
                    cout << "Normal Preparation - Table Service";
                }
                else if (dining_method == 2)
                {
                    cout << "Normal Preparation - Separate Packaging";
                }
                else if (dining_method == 3)
                {
                    cout << "Customer Type " << "(1: Regular | 2: VIP): ";
                    cin >> customer_type;

                    if (customer_type == 2)
                    {
                        cout << "Priority Kitchen Handling";
                    }
                    else if (customer_type == 1)
                    {
                        cout << "Normal Preparation - Delivery";
                    }
                    else
                    {
                        cout << "Order Rejected";
                    }
                }
                else
                {
                    cout << "Order Rejected";
                }
            }
            else if (spice_preference == 3)
            {
                cout << "Manual Confirmation";
            }
            else
            {
                cout << "Order Rejected";
            }
        }

        else if (serving_size == 2)
        {
            cout << "Customization " << "(1: Yes | 2: No): ";
            cin >> customization_request;

            if (customization_request == 1)
            {
                cout << "Spice Preference " << "(1: Mild | 2: Medium | 3: Spicy): ";
                cin >> spice_preference;

                if (spice_preference == 3)
                {
                    cout << "Manual Confirmation";
                }
                else if (spice_preference == 1 || spice_preference == 2)
                {
                    cout << "Modified Preparation";
                }
                else
                {
                    cout << "Order Rejected";
                }
            }
            else if (customization_request == 2)
            {
                cout << "Normal Preparation";
            }
            else
            {
                cout << "Order Rejected";
            }
        }

        else if (serving_size == 3)
        {
            cout << "Customization "
                 << "(1: Yes | 2: No): ";
            cin >> customization_request;

            if (customization_request == 1)
            {
                cout << "Do you have dietary requirements? "
                     << "(1: Yes | 2: No): ";
                cin >> dietary_requirement;

                if (dietary_requirement == 1)
                {
                    cout << "Special Dietary Preparation";
                }
                else if (dietary_requirement == 2)
                {
                    cout << "Modified Preparation";
                }
                else
                {
                    cout << "Order Rejected";
                }
            }
            else if (customization_request == 2)
            {
                cout << "Normal Preparation";
            }
            else
            {
                cout << "Order Rejected";
            }
        }

        else
        {
            cout << "Order Rejected";
        }
    }

    else if (meal_category == 2)
    {
        cout << "Serving Size " << "(1: Small | 2: Medium | 3: Large): ";
        cin >> serving_size;

        if (serving_size == 1)
        {
            cout << "Dining Method " << "(1: Dine-in | 2: Takeaway | 3: Delivery): ";
            cin >> dining_method;

            if (dining_method == 1)
            {
                cout << "Normal Preparation - Table Service";
            }
            else if (dining_method == 2)
            {
                cout << "Normal Preparation - Separate Packaging";
            }
            else if (dining_method == 3)
            {
                cout << "Customer Type "
                     << "(1: Regular | 2: VIP): ";
                cin >> customer_type;

                if (customer_type == 2)
                {
                    cout << "Priority Kitchen Handling";
                }
                else if (customer_type == 1)
                {
                    cout << "Normal Preparation - Delivery";
                }
                else
                {
                    cout << "Order Rejected";
                }
            }
            else
            {
                cout << "Order Rejected";
            }
        }

        else if (serving_size == 2 || serving_size == 3)
        {
            cout << "Customization "
                 << "(1: Yes | 2: No): ";
            cin >> customization_request;

            if (customization_request == 1)
            {
                cout << "Dietary Requirement "
                     << "(1: Yes | 2: No): ";
                cin >> dietary_requirement;

                if (dietary_requirement == 1)
                {
                    cout << "Ingredient Available "
                         << "(1: Yes | 2: No): ";
                    cin >> availability_of_ingredient;

                    if (availability_of_ingredient == 1)
                    {
                        cout << "Special Dietary Preparation";
                    }
                    else if (availability_of_ingredient == 2)
                    {
                        cout << "Substitute Ingredient Preparation";
                    }
                    else
                    {
                        cout << "Order Rejected";
                    }
                }

                else if (dietary_requirement == 2)
                {
                    cout << "Spice Preference "
                         << "(1: Mild | 2: Medium | 3: Spicy): ";
                    cin >> spice_preference;

                    if (spice_preference == 1 ||
                        spice_preference == 2)
                    {
                        cout << "Modified Preparation";
                    }
                    else if (spice_preference == 3)
                    {
                        cout << "Manual Confirmation";
                    }
                    else
                    {
                        cout << "Order Rejected";
                    }
                }

                else
                {
                    cout << "Order Rejected";
                }
            }

            else if (customization_request == 2)
            {
                cout << "Group Order "
                     << "(1: Yes | 2: No): ";
                cin >> group_order;

                if (group_order == 1)
                {
                    cout << "Special Group Order Preparation";
                }
                else if (group_order == 2)
                {
                    cout << "Normal Preparation";
                }
                else
                {
                    cout << "Order Rejected";
                }
            }

            else
            {
                cout << "Order Rejected";
            }
        }

        else
        {
            cout << "Order Rejected";
        }
    }

    else if (meal_category == 3)
    {
        cout << "Serving Size "
             << "(1: Small | 2: Medium | 3: Large): ";
        cin >> serving_size;

        if (serving_size == 1)
        {
            cout << "Normal Preparation";
        }

        else if (serving_size == 2)
        {
            cout << "Customization "
                 << "(1: Yes | 2: No): ";
            cin >> customization_request;

            if (customization_request == 1)
            {
                cout << "Dietary Requirement "
                     << "(1: Yes | 2: No): ";
                cin >> dietary_requirement;

                if (dietary_requirement == 1)
                {
                    cout << "Ingredient Available "
                         << "(1: Yes | 2: No): ";
                    cin >> availability_of_ingredient;

                    if (availability_of_ingredient == 1)
                    {
                        cout << "Special Dietary Preparation";
                    }
                    else if (availability_of_ingredient == 2)
                    {
                        cout << "Substitute Ingredient Preparation";
                    }
                    else
                    {
                        cout << "Order Rejected";
                    }
                }
                else if (dietary_requirement == 2)
                {
                    cout << "Modified Preparation";
                }
                else
                {
                    cout << "Order Rejected";
                }
            }
            else if (customization_request == 2)
            {
                cout << "Normal Preparation";
            }
            else
            {
                cout << "Order Rejected";
            }
        }

        else if (serving_size == 3)
        {
            cout << "Group Order "
                 << "(1: Yes | 2: No): ";
            cin >> group_order;

            if (group_order == 1)
            {
                cout << "Special Group Order Preparation";
            }
            else if (group_order == 2)
            {
                cout << "Customization "
                     << "(1: Yes | 2: No): ";
                cin >> customization_request;

                if (customization_request == 1)
                {
                    cout << "Modified Preparation";
                }
                else if (customization_request == 2)
                {
                    cout << "Normal Preparation";
                }
                else
                {
                    cout << "Order Rejected";
                }
            }
            else
            {
                cout << "Order Rejected";
            }
        }

        else
        {
            cout << "Order Rejected";
        }
    }

    else
    {
        cout << "Order Rejected";
    }
    return 0;
}

