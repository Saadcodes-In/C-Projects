/* Name: Saad
   Roll No: i262503
   Assignment: PF_02 */
#include <iostream>
using namespace std;

int main()
{	
    int age,membership_status,ticket_type,no_of_tickets;
    double base_ticket,membership_discount,no_of_ticket_discount,final_bill;
    
    cout << "Enter your age: ";
    cin >> age;
    
    cout << "Enter your membership status: ";
    cin >> membership_status;
    
    cout << "Enter your ticket type (0 for 2D|1 for 3D): ";
    cin >> ticket_type;
    
    cout << "Enter number of tickets you want: ";
    cin >> no_of_tickets;
  
    if(age < 13 )
        {
        base_ticket = 500;
        }
    else if(age >= 13 && age <= 59)
            {
            base_ticket = 800;
           }
    else if(age >= 60)
                {
                base_ticket = 600;
                }
    else
    	cout << "You entered your age wrong.";
    	
    cout << "Base ticket:" << base_ticket << endl;
    base_ticket = (base_ticket * no_of_tickets);
    
    if(ticket_type == 1)
                     {
                     base_ticket = base_ticket + (200 * no_of_tickets);
                     }
    
    if(membership_status == 1)
    	{
    	membership_discount = base_ticket * 0.1;
        cout << "Membership Discount: " << membership_discount << endl;
        base_ticket = base_ticket - membership_discount;
        }
        
     if(no_of_tickets >= 5)
            {
             no_of_ticket_discount = (base_ticket * 0.05);
             base_ticket = base_ticket - no_of_ticket_discount;
             cout << "No of ticket Discount: " << no_of_ticket_discount << endl;
             }		
        	          
    if(base_ticket >= 3000)
          {
		final_bill = base_ticket - 300;                          
          }	   
    else
    	final_bill = base_ticket;
    	
    cout << "Final Bill: " << final_bill << endl;
    
    return 0;
}
