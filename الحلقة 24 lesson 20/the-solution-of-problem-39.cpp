#include <iostream>
using namespace std;
int main()
{
    /* variables */
    float total_bill , cash_paid , remainder;

    /* the request of data */
    cout << "please enter the value of total bill and cash paid :\n";
    cin >> total_bill >> cash_paid;

    /* operations */
    remainder = cash_paid - total_bill;

    /* the result */
    cout << "the remainder is : " << remainder;

    return 0;
}