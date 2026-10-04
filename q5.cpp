/* Name: Saad
   Roll No: i262503
   Assignment: PF_02 */
#include <iostream>
using namespace std;


int main(){
    int A,B,C,D,E,sum_of_integers,pos_int=0,neg_int=0,largest_num,
    first_num,second_num,median,sum_of_distinct_value;
    int abs_diff,divisible_by_sev=0,value_twice=0,even_num=0,odd_num=0,
    second_largest_num;
    cout << "Enter the first number: ";
    cin >> A;
    cout << "Enter the second number: ";
    cin >> B;
    cout << "Enter the third number: ";
    cin >> C;
    cout << "Enter the fourth number: ";
    cin >> D;
    cout << "Enter the fifth number: ";
    cin >> E;

    sum_of_integers = A+B+C+D+E;
    // neg/pos count
    if(A<0)
    {
        neg_int += 1;
    }
    else
    {
        pos_int += 1;
    }
    if(B<0)
    {
        neg_int += 1;
    }
    else
    {
        pos_int += 1;
    }
    if(C<0)
    {
        neg_int += 1;
    }
    else
    {
        pos_int += 1;
    }
    if(D<0)
    {
        neg_int += 1;
    }
    else
    {
        pos_int += 1;
    }
    if(E<0)
    {
        neg_int += 1;
    }
    else
    {
        pos_int += 1;
    }

    //largest number count
    if((A>B && A>C) && (A>D && A >E) )
    {
        largest_num = A;
    }
    else if((B>A && B>C) && (B>D && B>E))
    {
        largest_num = B;
    }
    else if((C>A && C>B) && (C>D && C>E))
    {
        largest_num = C;
    }
    else if((D>A && D>B) && (D>C && D>E))
    {
        largest_num = D;
    }
    else
    {
        largest_num = E;
    }

    //first num count
    if((A<B && A<C) && (A<D && A<E))
    {
        first_num = A;
    }
    else if((B<A && B<C) && (B<D && B<E))
    {
        first_num = B;
    }
    else if((C<A && C<B) && (C<D && C<E))
    {
        first_num = C;
    }
    else if((D<A && D<B) && (D<C && D<E))
    {
        first_num = D;
    }
    else
    {
        first_num = E;
    }

    //second num count
    if((A>first_num) && ((A<B && A<C) || (A<D && A<E)) )
    {
        second_num = A;
    }
    else if((B>first_num) && ((B<A && B<C) || (B<D && B<E)))
    {
        second_num = B;
    }
    else if((C>first_num) && ((C<A && C<B) || (C<D && C<E)))
    {
        second_num = C;
    }
    else if((D>first_num) && ((D<A && D<B) || (D<C && D<E)))
    {
        second_num = D;
    }
    else
    {
        second_num = E;
    }

    //median
    if((A>first_num && A>second_num) && (A< largest_num && A < second_largest_num))
    {
        median = A;
    }
    else if((B>first_num && B>second_num) && (B < largest_num && B< second_largest_num))
    {
        median = B;
    }
    else if((C>first_num && C>second_num) && (C < largest_num && C < second_largest_num))
    {
        median = C;
    }
    else if((D>first_num && D>second_num) && (D < largest_num && D < second_largest_num))
    {
        median = D;
    }
    else
    {
        median = E;
    }
    //divisible_by_sev
    if((((A*C) % 7) == 0) && (abs(A-C) > 10))
    {
        divisible_by_sev = 1;
        abs_diff = 1;
    }
    else  if((((A*D) % 7) == 0) && (abs(A-D) > 10))
    {
        divisible_by_sev = 1;
        abs_diff = 1;
    }
    else  if((((A*E) % 7) == 0) && (abs(A-E) > 10))
    {
        divisible_by_sev = 1;
        abs_diff = 1;
    }
    else if(((B*D) % 7) == 0 && (abs(B-D) > 10))
    {
        divisible_by_sev = 1;
        abs_diff = 1;
    }
    else if(((B*E) % 7) == 0 && (abs(B-E) > 10))
    {
        divisible_by_sev = 1;
        abs_diff = 1;
    }
    else if((((C*E) % 7) == 0) && (abs(C-E) > 10))
    {
        divisible_by_sev = 1;
        abs_diff = 1;
    }
    else if((((C*A) % 7) == 0) && (abs(C-A) > 10))
    {
        divisible_by_sev = 1;
        abs_diff = 1;
    }
    else if(((D*A) % 7 == 0) && (abs(D-A) > 10))
    {
        divisible_by_sev = 1;
        abs_diff = 1;
    }
    else if(((D*B) % 7 == 0) && (abs(D-B) > 10))
    {
        divisible_by_sev = 1;
        abs_diff = 1;
    }
    else if((((E*A) % 7) == 0) && (abs(E-A) > 10))
    {
        divisible_by_sev = 1;
        abs_diff = 1;
    }
    else if((((E*B) % 7) == 0) && (abs(E-B) > 10))
    {
        divisible_by_sev = 1;
        abs_diff = 1;
    }
    else if((((E*C) % 7) == 0) && (abs(E-C) > 10))
    {
        divisible_by_sev = 1;
        abs_diff = 1;
    }
    else
    {
        divisible_by_sev = 0;
    }

    if(A==B && A!=C && A!=D && A!=E)
    {
        value_twice += 2;
        sum_of_distinct_value = (C+D+E);
    }
    else if(A==C && A!=B && A!=D && A!=E )
    {
        value_twice += 2;
        sum_of_distinct_value = (B+D+E);
    } 
    else if(A==D && A!=C && A!=B && A!=E)
    {
        value_twice += 2;
        sum_of_distinct_value = (B+C+E);
    } 
    else if(A==E && A!=C && A!=D && A!=B)
    {
        value_twice += 2;
        sum_of_distinct_value = (B+D+C);
    }
    else if(B==C && B!=A && B!=D && B!=E)
    {
        value_twice += 2;
        sum_of_distinct_value = (A+D+E);
    }
    else if(B==D && B!=C && B!=A && B!=E)
    {
        value_twice += 2;
        sum_of_distinct_value = (C+A+E);
    }   
    else if(B==E && B!=C && B!=D && B!=A)
    {
        value_twice += 2;
        sum_of_distinct_value = (C+D+A);
    } 
    else if(C==D && C!=A && C!=B && C!=E)
    {
        value_twice += 2;
        sum_of_distinct_value = (A+B+E);
    } 
    else if(C==E && C!=A && C!=B && C!=D)
    {
        value_twice += 2;
        sum_of_distinct_value = (B+D+A);
    } 
    else if(D==E && D!=A && D!=B && D!=C)
    {
        value_twice += 2;
        sum_of_distinct_value = (B+C+A);
    }
    
    //even/odd count
    if(A%2 == 0)
    {
        even_num += 1;
    }
    else
    {
        odd_num += 1;
    }
    if(B%2 == 0)
    {
        even_num += 1;
    }
    else
    {
        odd_num += 1;
    }
    if(C%2 == 0)
    {
        even_num += 1;
    }
    else
    {
        odd_num += 1;
    }
    if(D%2 == 0)
    {
        even_num += 1;
    }
    else
    {
        odd_num += 1;
    }
    if(E%2 == 0)
    {
        even_num += 1;
    }
    else
    {
        odd_num += 1;
    }

    //second large num 
    if ((A < B) + (A < C) + (A < D) + (A < E) == 1)
    {
        second_largest_num = A;
    }
    else if ((B < A) + (B < C) + (B < D) + (B < E) == 1)
    {
        second_largest_num = B;
    }
    else if ((C < A) + (C < B) + (C < D) + (C < E) == 1)
    {
        second_largest_num = C;
    }
    else if ((D < A) + (D < B) + (D < C) + (D < E) == 1)
    {
        second_largest_num = D;
    }
    else
    {
        second_largest_num = E;
    }    

    //conditions
    if((sum_of_integers < 0) && (neg_int >= 3))
    {
        cout << "Lockdown" << endl;
    }
    else if(((pos_int >= 1) && (largest_num > (3 * first_num)) && ((median % 2) == 0)))
    {
        cout << "Critical" << endl;
    }
    else if(divisible_by_sev == 1 && abs_diff == 1)
    {
        cout << "Breach" << endl;
    }
    else if(((value_twice == 2) && (sum_of_distinct_value % 2) == 1))
    {
         cout << "Anomaly" << endl;
    }
    else if((odd_num > even_num) && ((second_largest_num % 3) == 0))
    {
        cout << "Warming" << endl;
    }
    else if(abs(largest_num - first_num) > ((second_num + median + second_largest_num)/3))
    {
        cout << "Monitor" << endl;
    }
    else
    {
        cout << "SAFE";
    }
    return 0;


}

