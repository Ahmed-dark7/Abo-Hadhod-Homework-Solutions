#include <iostream>
using namespace std;
int main()
{
    /* variables */
    float loan_amount;
    int monthly_installment , total_months;

    /* the request of data */
    cout << "please enter the value of loan amount and monthly installment :\n";
    cin >> loan_amount >> monthly_installment;

    /* operations */
    total_months = loan_amount / monthly_installment;

    /* the result */
    cout << "total months is : " << total_months;

    return 0;
}